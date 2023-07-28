#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int key; 
    struct TreeNode *left; 
    struct TreeNode *right; 
    TreeNode(int k){
        key=k;
        left=right=NULL;
    }
};

int maxLevel=0;
void printLeft(TreeNode *root,int level){
    if(root==NULL)
        return;
    if(maxLevel<level){
        cout<<root->key<<" ";
        maxLevel=level;
    }
    printLeft(root->left,level+1);
    printLeft(root->right,level+1);
}

int main() {
	TreeNode *root = new TreeNode(10);
	root->left = new TreeNode(20);
	root->right = new TreeNode(30);
	root->right->left = new TreeNode(40);
	root->right->right = new TreeNode(50);
	
    printLeft(root,1);
}