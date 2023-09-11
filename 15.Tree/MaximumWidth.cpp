#include <iostream>
#include <queue>
using namespace std;

class TreeNode{
public:
    int key;
    TreeNode *left, *right;
    TreeNode(int val){
        left = NULL;
        right = NULL;
        key = val;
    }

    // TIME COMPLExITY IS O(n) , AUX SPACE IS THeta(width of tree) 
    int maximumWidth(TreeNode *root){
        if (root == NULL)
            return 0;
        int maxWidth = 0;

        queue<TreeNode *> q;
        q.push(root);

        while(!q.empty()){
            int count = q.size();
            maxWidth = max(maxWidth, count);

            for(int i = 0 ; i< count ; i++){
                TreeNode *curr = q.front();
                q.pop();
                cout<<curr->key<<" ";

                if(curr->left != NULL)
                    q.push(curr->left);
                if(curr->right != NULL)
                    q.push(curr->right);
            }
            cout<<endl;
        }
        return maxWidth;
    }
};

int main(){
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(8);
    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(9);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(12);
    root->right->right = new TreeNode(15);
    cout<<"The whole tree line by line is as follow :- \n";
    cout<<"\n"<<"The maximum width of bnary tree is : "<<root->maximumWidth(root)<<endl;

    return 0;
}
