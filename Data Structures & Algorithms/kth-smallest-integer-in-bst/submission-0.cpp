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
    void find(TreeNode* root,vector<int>&v){
        if(root==nullptr){
            return;
        }
        find(root->left,v);
        v.push_back(root->val);
        find(root->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        find(root,ans);
        return ans[k-1];
    }
};
