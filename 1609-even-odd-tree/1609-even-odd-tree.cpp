/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
         queue<TreeNode*> q;
        q.push(root);
        bool Even = true;
        while(!q.empty()){
            int n = q.size();
            int emini = INT_MIN;
            int omax = INT_MAX;
            for(int i=0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();
                
                if(Even){
                    if(temp->val % 2 != 0 && temp->val > emini){
                        emini = temp->val;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    if(temp->val % 2 == 0 && temp->val < omax){
                        omax = temp->val;
                    }
                    else{
                        return false;
                    }
                }
                
                
                if(temp->left){
                    q.push(temp->left);
                }
                
                if(temp->right){
                    q.push(temp->right);
                }
            }
            
            Even = !Even;
        }
        
        return true;
    }
};