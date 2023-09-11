#include <iostream>
#include <queue>
using namespace std;

class TreeNode{
public:
    int key;
    TreeNode *left, *right;
    TreeNode(int val){
        left = NULL;
        right = NULL;
        key = val;
    }

    // Time complexity is O(n) this is EFFICIENT APPROACH
    // Here every recursive call tells us that whether the particular tree/subtree is balanced or not and it also tells us their height 
    // In an efficient and tricky implementation we just return just one value that tells us that returns -1 if the tree/subtree is unbalanced else it returns the height of the tree( >=0 )
    int isBalancedTree(TreeNode *root){
        if (root == NULL)
            return 0;

        // We are checking for the left subtree and also getting the height of left subtree 
        int leftHeight = isBalancedTree(root->left);
        if(leftHeight == -1) 
            return -1;

        // We are checking for the right subtree and also getting the height of right subtree 
        int rightHeight = isBalancedTree(root->right);
        if(rightHeight == -1) 
            return -1;

        if(abs(leftHeight - rightHeight) > 1)
            return -1;

        return 1 + max(leftHeight, rightHeight);
    }
};

int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(8);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(2);
    root->right->right = new TreeNode(12);
    root->right->right->left = new TreeNode(15);

    int height = root->isBalancedTree(root);
    if(height == -1)
        cout<<"The tree is not height balanced"<<endl;
    else
        cout<<"The tree is height balanced and height of the tree is : "<<height<<endl;

    return 0;
}
