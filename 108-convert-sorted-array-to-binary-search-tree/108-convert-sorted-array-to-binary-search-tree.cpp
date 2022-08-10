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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==0)return NULL;
        return constructTree(nums,0,n-1);
    }
        TreeNode* constructTree(vector<int>& nums,int left,int right){
            int mid=left+(right-left)/2;
            if(left>right)return NULL;
            TreeNode* node=new TreeNode(nums[mid]);
            node->left=constructTree(nums,left,mid-1);
            node->right=constructTree(nums,mid+1,right);
            
            return node;
            
            
            
            
        
    }
};