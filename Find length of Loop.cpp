
time complexity.................................................compare    ??   ..................      O(n^2) ,,   O(n)

which solution is good.....................?
  
  
  
  
  
  

//..........................................................

int countNodesinLoop(struct Node *head)
{
    // Code here
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            int count=0;
            fast=slow->next;
            while(slow!=fast)
            {
                fast=fast->next;
                count++;
            }
            return count+1;
        }
    }
    return 0;
}


//..............................................................................


int countNodesinLoop(struct Node *head)
{
    if(head==NULL||head->next==NULL)
    {
        return 0;
    }
    // Code here
    Node*slow=head;
    Node*fast=head;
    Node*point=NULL;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        {
           point=slow;
           break;
        }
    }
    if(fast==NULL||fast->next==NULL)
    {
        return 0;
    }
    int count=1;
    Node*match=point;
    point=point->next;
    while(match!=point)
    {
        point=point->next;
        count++;
    }
    return count;
}
