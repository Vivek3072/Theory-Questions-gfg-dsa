#include<iostream>
#include<queue>
using namespace std;
// If all the nodes have the value equal to the sum of its children then true else false

class TreeNode{
public:
    int key;
    TreeNode *left,*right;
    TreeNode(int val){
        left = NULL;
        right = NULL;
        key =  val;
    }

    bool childrenSum(TreeNode *root){
        if(root == NULL)
            return true;
            
        // THis base condition is when a root has no leaf nodes further and is very important
        if(root->left != NULL && root->right == NULL)
            return true;

        int sum = 0;
        if (root->left != NULL)
            sum += root->left->key;
        if (root->right != NULL)
            sum += root->right->key;

        return (root->key == sum && childrenSum(root->left) && childrenSum(root->right));
    }
};

int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(8);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(2);

    if(root->childrenSum(root))
        cout<<"TRUE"<<endl;
    else    
        cout<<"FALSE"<<endl;
        
    return 0;
}