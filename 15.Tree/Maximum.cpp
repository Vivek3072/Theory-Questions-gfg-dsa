#include<iostream>
using namespace std;

class TreeNode{
public:
    int key;
    TreeNode *left,*right;
    TreeNode(int val){
        left = NULL;
        right = NULL;
        key =  val;
    }

    int maximumOfTree(TreeNode *root){
        if(root == NULL)
            return INT32_MIN;
        return max(root->key, max(maximumOfTree(root->left), maximumOfTree(root->right)) );
    }
};

int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(45);
    root->right->left = new TreeNode(35);
    // root->right->right = new TreeNode(39);
    cout<<"The maximum of the binary tree is : " << root->maximumOfTree(root);
    return 0;
}
