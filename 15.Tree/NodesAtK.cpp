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
    
    //Time complexity is O(n), auxillary space = O(height of tree)
    void NodesAtDistanceK(TreeNode *root, int k){
        if(root == NULL)
            return;
        if(k==0) cout<<root->key<<" ";
        else{
            NodesAtDistanceK(root->left, k-1);
            NodesAtDistanceK(root->right, k-1);
        }
    }
};
 
int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(45);
    root->right->left = new TreeNode(35);
    root->right->right = new TreeNode(39);
    int k = 2;
    cout<<"The kth nodes are : ";
    root->NodesAtDistanceK(root, k);
    return 0;
}
 