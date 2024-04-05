// 559. Maximum Depth of N-ary Tree
// Definition for a N Arry Tree Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    int maxDepth(Node* root) {
        if(root == NULL)
            return 0;
        int childSize = root->children.size();
        int maxSize = 0;
        for(int i = 0 ; i < childSize ; i++)
            maxSize = max(maxSize, maxDepth(root->children[i]));
        return 1 + maxSize;
    }
};

int main(){
    // Create the tree here
    // Call the maxDepth function with root node
    return 0;
}