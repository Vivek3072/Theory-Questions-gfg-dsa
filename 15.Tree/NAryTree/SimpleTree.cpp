#include <iostream>
#include <vector>
using namespace std;

/*
4
├── 5
├── 6 
|   └── 2 
|   |   └── 11
|   |   └── 12
|   └── 3
└── 1
*/

class TreeNode{
public:
    int val;
    vector<TreeNode *> children;

    TreeNode() {}
    TreeNode(int _val){
        val = _val;
    }
    TreeNode(int _val, vector<TreeNode *> _children){
        val = _val;
        children = _children;
    }
};

void printTreePreorder(TreeNode *root){
    if (root == NULL)
        return;

    cout << root->val << " "; // Print the value of the current node

    for (int i = 0; i < root->children.size(); i++)
        printTreePreorder(root->children[i]); // Recursively print the children
}

int main(){
    // TreeNode *leaf1_child1 = new TreeNode(7);
    // TreeNode *leaf1_child2 = new TreeNode(8);
    TreeNode *leaf2_child1 = new TreeNode(2);
    TreeNode *leaf2_child2 = new TreeNode(3);

    vector<TreeNode *> child1 = {new TreeNode(5), new TreeNode(6,  {leaf2_child1, leaf2_child2}), new TreeNode(1)};
    TreeNode *root = new TreeNode(4, child1);

    // Adding further children to two of the leaves
    leaf2_child1->children.push_back(new TreeNode(11));
    leaf2_child1->children.push_back(new TreeNode(12));

    printTreePreorder(root);
    return 0;
}
