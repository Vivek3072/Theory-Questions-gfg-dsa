#include<iostream>
using namespace std;
//FLOOR IS THE VALUE PRESENT IN THE TREE WHICH IS EQUAL OR CLOSEST(smaller than given value) TO THE GIVEN VALUE

struct TreeNode{
public:
    int key;
    TreeNode *left,*right;
    TreeNode(int val){ 
        left = NULL;
        right = NULL;
        key =  val;
    }

    // Time complexity is O(height of BST), And auxillary space is O(1)
TreeNode* floorIterative(TreeNode* root, int val) {
    TreeNode* floorValue = NULL;

    while (root != NULL) {
        if (root->key == val) {
            // If the current node's key is equal to the target value,
            // it means the floor value is equal to the target value.
            return root;
        } else if (root->key > val) {
            // If the current node's key is greater than the target value,
            // move to the left subtree to find a smaller value.
            root = root->left;
        } else {
            // If the current node's key is less than the target value,
            // update the floorValue to the current node and move to the right subtree.
            floorValue = root;
            root = root->right;
        }
    }
    return floorValue;
}

};

int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(8);
    root->right = new TreeNode(30);
    root->right->right = new TreeNode(40);

    cout<<"Floor Value present is : "<<root->floorIterative(root,20)->key;

    return 0;
}
