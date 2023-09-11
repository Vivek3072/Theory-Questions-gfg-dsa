#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// Constructing a tree from inorder and preorder traversal of a tree
// For constructig a tree inorder is nicessary with another preorder or post order traversal

class TreeNode{
public:
    int key;
    TreeNode *left, *right;

    TreeNode(int val){
        key = val;
        left = right = NULL;
    }

    int preIdx = 0;
    TreeNode* constructTree(vector<int> &preorder, vector<int> &inorder, int iStart, int iEnd){
        if(iStart > iEnd)
            return NULL;
        TreeNode *root = new TreeNode(preorder[preIdx++]);

        int inIdx = 0;
        for(int i = 0 ; i< inorder.size() ; i++){
            if(inorder[i] == root->key){
                inIdx = i;
                break;
            }
        }
        root->left = constructTree(preorder, inorder, iStart, inIdx - 1 );
        root->right = constructTree(preorder, inorder, inIdx + 1, iEnd);
        return root;
    }

    void levelOrder2(TreeNode *root){
        if(root == NULL)
            return;
        queue<TreeNode *> q;
        q.push(root);

        while( !q.empty()){
            int count = q.size();

            for(int i = 0 ; i < count ; i++){
                TreeNode *curr = q.front();
                q.pop();
                cout<< curr->key <<" ";

                if(curr->left != NULL)
                    q.push(curr->left);
                if(curr->right != NULL)
                    q.push(curr->right);
            }
            cout<<endl;
        }
    }
};

int main(){
    vector<int> inorder = {9,3,15,20,7}, preorder = {3,9,20,15,7};
    TreeNode *root = new TreeNode(preorder[0]);
    // cout<<root->key;
    
    root = root->constructTree(preorder, inorder, 0, inorder.size()-1);
    root->levelOrder2(root);
    return 0;
}