#include <bits/stdc++.h>
using namespace std;

/*
    Binary Search Tree (BST) Node Deletion Cases

*   CASE 1: Leaf Node Deletion
            - When the given node is a leaf node (a node with no children), we simply remove that node from the tree.
*   CASE 2: Node with a Single Child Deletion
            - When the given node is a root node and has only one child, we replace the node with its child.
*   CASE 3: Node with Two Children Deletion
            - When the given node is a root node and has two children, we replace the node's value with the value of the closest
              greater node in the right subtree (i.e., the minimum value in the right subtree) and then recursively delete that 
              closest greater node from the right subtree.
*   CASE 4: Value Not Found in the Tree
            - When the given value is not available in the tree, we don't make any changes to the tree and return it as it is.

   Note: The above cases are considered for binary search trees, where each node's left child has a value less than the
   parent node's value, and each node's right child has a value greater than the parent node's value.
*/

struct TreeNode { 
    int key; 
    TreeNode *left; 
    TreeNode *right; 
  TreeNode(int k){
      key=k;
      left=right=NULL;
  }
};

// DELETING A NODE RECURSIVELY
TreeNode* findMinimum(TreeNode* curr) {
    while (curr != NULL && curr->left != NULL)
        curr = curr->left;
    return curr;
}

TreeNode* deleteRecursive(TreeNode* root, int x) {
    if (root == NULL)
        return NULL;

    if (root->key < x)
        root->right = deleteRecursive(root->right, x);
    else if (root->key > x)
        root->left = deleteRecursive(root->left, x);
    else {
        if (root->left == NULL) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            TreeNode* temp = root->left;
            // free(root);
            delete root;
            return temp;
        }else {
            // CASE 3: Node with 2 children
            TreeNode* temp = findMinimum(root->right);
            root->key = temp->key;
            root->right = deleteRecursive(root->right, temp->key);
        }
    }
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
	int x=5;
	
    cout<<"Before deleting : ";
	inorderTraversal(root);
	root=deleteRecursive(root,x);
    cout<<"\nAfter deleting "<<x<<" : ";
	inorderTraversal(root);
}
 