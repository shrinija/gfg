//?
// see first and second ans........know what is the difference and why.......?

//.....................................................................................................................

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

