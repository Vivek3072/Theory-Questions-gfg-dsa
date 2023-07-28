#include<iostream>
#include<queue>
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

    void naiveBreadthFirst(){
        // Get the height of the tree then print the nodes at all values of k as done in print nodes at K distance question
        // O(height of tree x n)
    }
    
    void levelOrder(TreeNode *root){
        if (root == nullptr) 
            return;
        queue<TreeNode *> q;

        q.push(root);
        q.push(NULL);

        while(q.size() > 1){
            TreeNode* curr = q.front();
            q.pop();

            if(curr == NULL){
                cout<<"\n";
                q.push(NULL);
                continue;
            }
            cout<<curr->key<<" ";
            if(curr->left != NULL)
                q.push(curr->left );
            if(curr->right != NULL)
                q.push(curr->right );
        }
    }
    
    //Also called as LEVEL ORDER Traversal
    void breadthFirst(TreeNode *root){
        if(root == NULL) 
            return;
        
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);

        while(q.size() > 1){
            TreeNode* curr = q.front();
            q.pop();

            if(curr == NULL){
                cout<<"\n";
                q.push(NULL);
                continue;
            }
            cout<<curr->key<<" ";
            if(curr->left != NULL)
                q.push(curr->left );
            if(curr->right != NULL)
                q.push(curr->right );
        }
    }
};

int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    cout<<"LEVEL ORDER TRAVERSAL : "<<endl; 
    root->breadthFirst(root); cout<<endl; 

    return 0;
}
