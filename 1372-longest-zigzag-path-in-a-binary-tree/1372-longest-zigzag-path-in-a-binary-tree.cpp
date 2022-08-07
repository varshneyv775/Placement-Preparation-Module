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
    int f(TreeNode* root,int score,bool isLeft){
    if(root)
        if (isLeft)
        return max(f(root->left,1,true),f(root->right,score+1,false));
        else
        return max(f(root->left,score+1,true),f(root->right,1,false));
    return score-1;

    
}
    int longestZigZag(TreeNode* root) {
        return f(root,0,true);
    }
};