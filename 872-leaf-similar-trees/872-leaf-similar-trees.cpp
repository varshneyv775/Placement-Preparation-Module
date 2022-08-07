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
public:void dfs(TreeNode* root,vector<int> &lastrow){
    if(root==NULL)return;

    else{
        if(root->left==NULL && root->right==NULL)lastrow.push_back(root->val);
        dfs(root->left,lastrow);
        dfs(root->right,lastrow);
    }
}


    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> first;
vector<int> second;
dfs(root1,first);
dfs(root2,second);
return first==second;
    }
};