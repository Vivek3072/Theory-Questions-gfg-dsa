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
    // TIME COM PLEXITY = O(n), AUZILLARY SPACE = O(height of binary tree +1)
    void inorder(TreeNode *root){
        if(root == NULL)
            return;
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }

    // TIME COM PLEXITY = O(n), AUZILLARY SPACE = O(height of binary tree +1)
    void preorder(TreeNode *root){
        if(root == NULL)
            return;
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    
    // TIME COM PLEXITY = O(n), AUZILLARY SPACE = O(height of binary tree +1)
    void postorder(TreeNode *root){
        if(root == NULL)
            return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
};

int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    cout<<"INORDER TRAVERSAL : "; root->inorder(root); cout<<endl; 
    cout<<"PREORDER TRAVERSAL : "; root->preorder(root); cout<<endl;
    cout<<"POSTORDER TRAVERSAL : "; root->postorder(root); cout<<endl;

    return 0;
}
