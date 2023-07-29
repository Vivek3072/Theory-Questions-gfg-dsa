#include <bits/stdc++.h>
using namespace std;

struct TreeNode { 
  int key; 
  struct TreeNode *left; 
  struct TreeNode *right; 
  TreeNode(int k){
      key=k;
      left=right=NULL;
  }
};

TreeNode *insertRecursive(TreeNode *root, int x){
    if(root==NULL)
        return new TreeNode(x);
    if(root->key<x)
        root->right=insertRecursive(root->right,x);
    else if(root->key>x)
        root->left=insertRecursive(root->left,x);
    return root;
} 

TreeNode *insertIterative(TreeNode *root, int x){
   TreeNode *temp=new TreeNode(x);
   TreeNode *parent=NULL,*curr=root;
    while(curr!=NULL){
        parent=curr;
        if(curr->key>x)
            curr=curr->left;
        else if(curr->key<x)
            curr=curr->right;
        else
            return root;
    }
    if(parent==NULL)
        return temp;
    if(parent->key>x)
        parent->left=temp;
    else
        parent->right=temp;
    return root;
} 


void inorderTraversal(TreeNode *root){
    if(root!=NULL){
        inorderTraversal(root->left);
        cout<<root->key<<" ";
        inorderTraversal(root->right);    
    }
} 
int main() {
	TreeNode *root=new TreeNode(10);
	root->left=new TreeNode(5);
	root->right=new TreeNode(15);
	root->right->left=new TreeNode(12);
	root->right->right=new TreeNode(18);
	int x=20;
	
	root=insertRecursive(root,x);
	inorderTraversal(root);
}
