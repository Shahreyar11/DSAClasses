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
    vector<vector<int>> res;
    bool status = false;
    void fun(TreeNode* root, int sum, int target, vector<int> tmp){
        if(root == NULL) return;
        tmp.push_back(root->val);
        sum += root->val;
        
        if(root->left == NULL and root->right == NULL){
            if(sum == target){
                res.push_back(tmp);
            }
        }
        fun(root->left, sum, target, tmp);
        fun(root->right, sum, target, tmp);
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        fun(root, sum, targetSum, {});
        return res;
    }
};