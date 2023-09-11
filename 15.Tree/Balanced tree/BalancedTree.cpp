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

    int height(TreeNode *node){
        if (node == NULL)
            return 0;
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        return max(leftHeight, rightHeight) + 1;
    }

    // Time complexity is O(n*n) this is NAIVE APPROACH
    bool isBalancedTree(TreeNode *root){
        if (root == NULL)
            return true;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return (abs(leftHeight - rightHeight) <= 1 && isBalancedTree(root->left) && isBalancedTree(root->right));
    }
};

int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(8);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(2);

    if (root->isBalancedTree(root))
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;

    return 0;
}

// #include<iostream>
// #include<queue>
// using namespace std;
// // HEIGHT BALANCED
// // Difference in the Height of left and right subtree should not be more than one

// class TreeNode{
// public:
//     int key;
//     TreeNode *left,*right;
//     TreeNode(int val){
//         left = NULL;
//         right = NULL;
//         key =  val;
//     }

//     bool isBalancedTree(TreeNode *root){
//         if(root == NULL)
//             return true;
//         if(root->left == NULL && root->right == NULL)
//             return true;
//         if(root->left != NULL && root->right != NULL)
//             return true;
//         else if(root->left == NULL || root->right == NULL)
//             return false;
//         return isBalancedTree(root->left) && isBalancedTree(root->right);
//     }
// };

// int main(){
//     TreeNode *root = new TreeNode(10);
//     root->left = new TreeNode(8);
//     root->right = new TreeNode(2);
//     root->right->left = new TreeNode(2);

//     if(root->isBalancedTree(root))
//         cout<<"TRUE"<<endl;
//     else
//         cout<<"FALSE"<<endl;

//     return 0;

// }