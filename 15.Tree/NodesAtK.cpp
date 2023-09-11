// #include <iostream>
// using namespace std;

// class TreeNode {
// private:
//     int key;
//     TreeNode* left;
//     TreeNode* right;
// public:
//     //Constructor initializer list,
//     TreeNode(int val) : key(val), left(NULL), right(NULL) {}

//     void setLeftKey(int val) {
//         if (left == NULL)
//             left = new TreeNode(val);
//         else
//             left->setLeftKey(val);
//     }

//     void setRightKey(int val) {
//         if (right == NULL)
//             right = new TreeNode(val);
//         else
//             right->setRightKey(val);
//     }

//Time complexity is O(n), auxillary space = O(height of tree)
//     void printNodeAtK(TreeNode* root, int k) {
//         if (root == NULL)
//             return;
//         if (k == 0)
//             cout << root->key << " ";
//         printNodeAtK(root->left, k - 1);
//         printNodeAtK(root->right, k - 1);
//     }
// };

// int main() {
//     TreeNode* root = new TreeNode(10);
//     root->setLeftKey(20);
//     root->setRightKey(30);
//     root->setLeftKey(25);
//     root->setRightKey(40);

//     root->printNodeAtK(root, 2);
//     return 0;
// }




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
 