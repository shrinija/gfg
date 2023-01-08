void MyQueue:: push(int x)
{
        // Your Code
        QueueNode*newnode=new QueueNode(x);
        if(front==NULL)                                                                   //see this is very imp..... dry run and then you will understand better..
        {
            front=newnode;
            rear=newnode;
        }
        else
        {
            rear->next=newnode;
            rear=rear->next;
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code    
        if(front==NULL)                                //also this.......
        {
            return -1;
        }
        int ans=front->data;
        front=front->next;
        return ans;
}




//.........  ----->>
ex-
  push(1)
  push(2)
  pop()
  pop()
  now see where front and rear are pointing.... and you will understand..
