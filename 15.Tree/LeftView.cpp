#include<iostream>
#include<queue>
using namespace std;
// LEFT VIEW MEANS AT EVERY LEVEL WE NEED TO PRINT THE LEFT MOST NODE OF THE TREE 

class TreeNode{
public:
    int key;
    TreeNode *left,*right;
    TreeNode(int val){
        left = NULL;
        right = NULL;
        key =  val;
    }

    // We are going to reach the left node first with PREORDER TRAVERSAL OF BINARY TREE 
    int maxLevel = 0;
    void leftViewRecursive(TreeNode *root, int level){
        if(root == NULL)
            return;
        if(maxLevel < level){
            cout<<root->key<<" ";
            maxLevel = level;
        }

        leftViewRecursive(root->left, level + 1);
        leftViewRecursive(root->right, level + 1);
    }


    // We are going to reach the left node first with PREORDER TRAVERSAL OF BINARY TREE 
    void leftViewIterative(TreeNode *root, int level){
        if(root==NULL)return;

        queue<TreeNode *>q;
        q.push(root);

        while(q.empty()==false){
            int count=q.size();

            for(int i=0;i<count;i++){
                TreeNode *curr=q.front();
                q.pop();
                if(i == 0) 
                    cout<<curr->key<<" ";
                if(curr->left!=NULL)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
            }
        }
    }
};

int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);

    root->leftViewIterative(root, 1);
    return 0;
}
