/*
// Definition for a Node.
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
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        vector<vector<int>> ans;
        queue<Node *>q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;
            
            for(int i = 0 ; i < size ; i++){
                Node *curr = q.front();
                temp.push_back(q.front()->val);
                q.pop();
                for (auto node: curr->children)
                    q.push(node);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};