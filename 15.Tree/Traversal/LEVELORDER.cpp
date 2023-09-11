#include <iostream>
#include <queue>
using namespace std;

class TreeNode{
public:
    TreeNode *left, *right;
    int key;
    TreeNode(int val){
        left = NULL;
        right = NULL;
        key = val;
    }

    void levelOrder(TreeNode *root){
        if (root == NULL)
            return;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty()){
            TreeNode *curr = q.front();
            q.pop();
            cout << curr->key << " ";

            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
};

int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->levelOrder(root);
    return 0;
}