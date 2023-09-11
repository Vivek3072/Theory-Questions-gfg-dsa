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

    int heightTree(TreeNode *root){
        if(root == NULL)
            return 0;
        return max(heightTree(root->left),heightTree(root->right))+1;
    }
};

int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);

    cout<<"The height is : "<<root->heightTree(root);
    return 0;
}
