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

 vector<int>v; 
  void preorder(TreeNode*root)  // pre order traversal
    {
        if(root==NULL)
        {
          return ;
        }
       
        preorder(root->left);
          v.push_back(root->val);
        preorder(root->right);
        
        
    }
 

   bool findTarget(TreeNode* root, int k) {
        preorder(root);
       
        
        int l=0;  //left pointer
        int r=v.size()-1; //right pointer
        
        while(l<r)
        {
            if(v[l]+v[r]==k)
            {
                return true;
            }
            else if(v[l]+v[r]>k)
            {
                r--;
            }
            else l++;
        }
        return false;
    }
     
};