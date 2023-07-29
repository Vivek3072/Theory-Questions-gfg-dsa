#include<iostream>
using namespace std;

struct TreeNode{
public:
    int key;
    TreeNode *left,*right;
    TreeNode(int val){
        left = NULL;
        right = NULL;
        key =  val;
    }

    // TIme complexity is O(height of BST), And auxillary space is O(1)
    bool searchTreeIterative(TreeNode *root, int val){
        while(root != NULL){
            if(root->key == val)
                return true;
            else if(root->key > val)
                root = root->left;
            else
                root = root->right;
        }
        return false;
    }

    // TIme complexity is O(height of BST), And auxillary space is O(height of BST)
    bool searchTreeRecursive(TreeNode *root, int val){
        if(root == NULL)
            return false;
        else if(root->key == val)
            return true;
        else if(root->key > val)
            return searchTreeRecursive(root->left,val);
        else
            return searchTreeRecursive(root->right,val);
    }
};

int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(8);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);

    if(root->searchTreeRecursive(root,30))
        cout<<"Value present";
    else
        cout<<"Value not present";

    return 0;
}
