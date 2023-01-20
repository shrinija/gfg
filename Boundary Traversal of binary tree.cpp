

//......................................................................
TLE
==> need to optimize


class Solution {
public:
void left_values(Node*lnode,vector<int>&v)
{
    if(lnode==NULL)
    {
        return;
    }
    if(lnode->left==NULL && lnode->right==NULL)
    {
        return;
    }
    v.push_back(lnode->data);
    if(lnode->left==NULL)
    {
        left_values(lnode->right,v);
    }
    else
    {
        left_values(lnode->left,v);
    }
}

void leaf_values(Node*node,vector<int>&v)
{
 if(node==NULL)
 {
     return ;
 }
 if(node->left==NULL && node->right==NULL)
 {
     v.push_back(node->data);
     return;
 }
  leaf_values(node->left,v);
  leaf_values(node->right,v);
 
}

vector<int> right_values(Node*rnode)
{
    vector<int>v;
     if(rnode==NULL)
    {
        return v;
    }
    if(rnode->left==NULL && rnode->right==NULL)
    {
        return v;
    }
    v.push_back(rnode->data);
    vector<int>smallV;
    if(rnode->right==NULL)
    {
        smallV=right_values(rnode->left);
    }
    else
    {
        smallV=right_values(rnode->right);
    }
    for(int i=0;i<smallV.size();i++)
    {
        v.push_back(smallV[i]);
    }
    return v;
}


    vector <int> boundary(Node *root)
    {
        vector<int>v;
        if(root==NULL)
        {
            return v;
        }
        v.push_back(root->data);
        
        left_values(root->left,v);
        
        leaf_values(root->left,v);
        
        leaf_values(root->right,v);
        
       vector<int>rv= right_values(root->right);
       reverse(rv.begin(),rv.end());
       for(int i=0;i<rv.size();i++)
       {
           v.push_back(rv[i]);
       }
        return v;
        
        
    }
};


//..................................................................................................................

//better then above

class Solution {
public:
void left_values(Node*lnode,vector<int>&v)
{
    if(lnode==NULL)
    {
        return;
    }
    if(lnode->left==NULL && lnode->right==NULL)
    {
        return;
    }
    v.push_back(lnode->data);
    if(lnode->left==NULL)
    {
        left_values(lnode->right,v);
    }
    else
    {
        left_values(lnode->left,v);
    }
}

void leaf_values(Node*node,vector<int>&v)
{
 if(node==NULL)
 {
     return ;
 }
 if(node->left==NULL && node->right==NULL)
 {
     v.push_back(node->data);
     return;
 }
  leaf_values(node->left,v);
  leaf_values(node->right,v);
 
}

void right_values(Node*rnode,vector<int>&v)
{
    if(rnode==NULL)
    {
        return;
    }
    if(rnode->left==NULL && rnode->right==NULL)
    {
        return ;
    }
    if(rnode->right==NULL)
    right_values(rnode->left,v);
    else
    right_values(rnode->right,v);
    v.push_back(rnode->data);
}


    vector <int> boundary(Node *root)
    {
        vector<int>v;
        if(root==NULL)
        {
            return v;
        }
        v.push_back(root->data);
        
        left_values(root->left,v);
        
        leaf_values(root->left,v);
        
        leaf_values(root->right,v);
        
        right_values(root->right,v);
        
        
        return v;
        
    }
};

//.............................................................................................................
