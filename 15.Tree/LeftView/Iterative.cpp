#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int key; 
    struct TreeNode *left; 
    struct TreeNode *right; 
    TreeNode(int k){
        key = k;
        left = right = NULL;
    }
};

void printLeft(TreeNode *root){
    if(root==NULL)return;

    queue<TreeNode *>q;
    q.push(root);

    while(q.empty()==false){
        int count=q.size();

        for(int i=0;i<count;i++){
            TreeNode *curr=q.front();
            q.pop();
            if(i==0)
                cout<<curr->key<<" ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
    }
}

int main() {
	TreeNode *root = new TreeNode(10);
	root->left = new TreeNode(20);
	root->right = new TreeNode(30);
	root->right->left = new TreeNode(40);
	root->right->right = new TreeNode(50);
	
    printLeft(root);
}