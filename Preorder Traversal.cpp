//?
// see first and second ans........know what is the difference and why.......?

//.....................................................................................................................
//recursive


vector<int>& helper(Node*root ,vector<int>&v)                                      //  see   &    and know why...
{
    if(root==NULL)
    {
        return v;
    }
  v.push_back(root->data);
  helper(root->left,v);
  helper(root->right,v);
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>v;
 return helper(root,v);
}

//............................................................................................................
//recursive


void helper(Node*root ,vector<int>&v)
{
 if(root==NULL)
 {
     return ;
 }
 v.push_back(root->data);
 helper(root->left,v);
 helper(root->right,v);
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>v;
  helper(root,v);
  return v;
}

//...............................................................................................................

//itetrative

// see how smartly we are using stack..think like this...like what we can do .. what changes to be made to reach to our result.. how to use available data structures

vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> v;
  stack<Node*> st;
  if(root)
  {
    st.push(root);
  }
  
  while(!st.empty())
  {
      Node*top = st.top();
      st.pop();
      v.push_back(top->data);
      
      if(top->right != NULL)
      {
          st.push(top->right);
      }
      if(top->left != NULL)
      {
          st.push(top->left);
      }
  }
 return v;
}

//..........................................................................................................................
