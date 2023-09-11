#include <iostream>
using namespace std;
//FLATTEN A TREE IN DOUBLY LINKED LIST

class TreeNode{
public:
    int key;
    TreeNode *left, *right;
    TreeNode(int val){
        left = NULL;
        right = NULL;
        key = val;
    }

    TreeNode *prev = NULL;
    TreeNode *flattenTree(TreeNode *root){
        if (root == NULL)
            return root;
        TreeNode *head = flattenTree(root->left);

        if(prev == NULL)
            head = root;
        else{
            root->left = prev;
            prev->right = root;
        }
        prev = root;
        flattenTree(root->right);
        return head;
    }

    void printList(TreeNode *root){
        if(root == NULL) return;
        TreeNode* current = root;
        while (current != NULL) {
            cout << current->key << " ";
            current = current->right;
        }
    }
};

int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);

    root = root->flattenTree(root);
    root->printList(root);
    return 0;
}


/*
APPROACH - 1 (Using Recursion)
Approach
The algorithm steps can be stated as:

If we observe, we are moving in a reverse postorder way : i.e right, left, root.
We take a reference variable (say prev) to store the previous node( initialized to NULL).
Whenever we visit a node, we set the right child to the prev and left child to NULL.
Next we assign this current node to prev.
We perform the above two operations on all the nodes in the traversal.
Complexity
Time complexity:
O(n)
Space complexity:
O(n)
Code

class Solution {
public:
    void flatten(TreeNode* root,TreeNode*& prev) {
        if(root == NULL)
            return;

        flatten(root->right,prev);
        flatten(root->left,prev);

        root->right = prev;
        root->left = NULL;
        prev = root;
    }

    void flatten(TreeNode* root) {
        if(root == NULL)
            return;

        TreeNode* prev = NULL;

        flatten(root,prev);

    }
};
APPROACH - 2 (Using Stack)
Intuition
In a binary tree, generally, we need to set the right child of the node to the left and the left child to NULL. If the given tree is a left-skewed tree, this action alone will flatten the binary tree.

Now the main question arises is what if the current node doesn’t have a left child? In that case, we don’t want to assign its right child to NULL( its left child), rather we want it to assign to itself so that our preorder sequence is maintained. In case the right child is also not present(a leaf node) we would want to assign the right child to some parent node’s right child.

To get to this parent’s right node we will use a stack. Whenever we are at a node we want to prioritize its left child if it is present. If it is not present we want to look at the right child. A stack is a LIFO data structure, we first push the right child and then the left child. Then we set the right child of the node to the stack’s top and left child as NULL. This way the stack always provides the correct next node.

Approach
The algorithm approach can be stated as:

Take a stack and push the root node to it.
Set a while loop till the stack is non-empty.
In every iteration, take the node at the top of the stack( say cur) and pop the stack.
If cur has a right child, push it to the stack.
If cur has a left child, push it to the stack.
Set the right child of cur to node at stack’s top.
Set the left child of cur as NULL.
Complexity
Time complexity:
O(n)
Space complexity:
O(n)
Code


class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL)
        return;

        stack<TreeNode*> st;

        st.push(root);

        while(!st.empty()) {
            TreeNode* curr = st.top();
            st.pop();

            if(curr->right)
                st.push(curr->right);

            if(curr->left)
                st.push(curr->left);

            if(!st.empty()) {
                curr->right = st.top();
            }
            curr->left = NULL;
        }
    }
};
APPROACH - 3 (Using Morris Traversal)
Intuition
We will use the intuition behind morris’s traversal. In Morris Traversal we use the concept of a threaded binary tree.

If we set the right child of every node like this(marked in red) and the left child as NULL, our job will be done.

Approach
At a node(say cur) if there exists a left child, we will find the rightmost node in the left subtree(say prev).
We will set prev’s right child to cur’s right child,
We will then set cur’s right child to it’s left child.
We will then move cur to the next node by assigning cur it to its right child
We will stop the execution when cur points to NULL.
Complexity
Time complexity:
O(n)
Space complexity:
O(1)
Code
//
// Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
//
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL)
            return;

        TreeNode* curr = root;

        while(curr) {

            if(curr->left) {
                TreeNode* prev = curr->left;

                while(prev->right) {
                    prev = prev->right;
                }

                prev->right = curr->right;
                curr->right = curr->left;


            }
            curr->left = NULL;
            curr = curr->right;
        }
    }
};
Previous
Flatten Binary Tree to Linked List Solution in C++
Next
Best O(N) Solution
Comments (1)

Sort by:Best
Type comment here... (Markdown supported)
Preview
Comment

stemcoding
Sep 02, 2023
Amazing Approaches
Thanks!!!

0
Reply

Upvote 2


Console


*/