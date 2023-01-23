
void helper(Node*root,vector<int>&v,int level)       // 2 jab apne right pe call karge tab tak uska vector change hua hoga parr...
                                                                        //level to uska vahi hai jo pehle stack me stored hai..
  
**-->  int level ,int &level  ................................  // ye dono chize dry run karke dekhna ........************************
  
  
//...................................................................................................................
  
  
  if(v.size()==level)
    {
        v.push_back(root->data);
        level++;
    }
  
  if(v.size()==level++)                // see this   ... even if the if condition is false .. level will get increased......and this is what we need in our approach
  
  
    //............
    
     if(v.size()==level)
    {
        v.push_back(root->data);
    }
    helper(root->left,v,level+1);
    helper(root->right,v,level+1);            // or pass level like this...........
    
    
  
//.................................................................................................................................................................

void helper(Node*root,vector<int>&v,int level)       
{
    if(root==NULL)
    {
        return;
    }
    if(v.size()==level++)
    {
        v.push_back(root->data);
    }
    helper(root->left,v,level);
    helper(root->right,v,level);
}
vector<int> leftView(Node *root)
{

   vector<int>v;
   int level=0;
   helper(root,v,level);
   return v;
}

//....................................................................................................................................................
