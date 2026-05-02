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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL){
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool lefttoright = 1;
        while(!q.empty()){
            int lvlsize = q.size();
            int first = 0;
            int last = lvlsize - 1;  // making an array size of lvlsize to input all elements
            vector<int> tmp(lvlsize);
            while(lvlsize--){
                TreeNode* t = q.front();
                q.pop();
                if(lefttoright){
                    tmp[first] = (t->val);
                    first++;
                }
                else{
                    tmp[last] = (t->val);
                    last--;
                }
                if(t->left != NULL){
                    q.push(t->left);
                }
                if(t->right != NULL){
                    q.push(t->right);
                }
            }
            lefttoright = 1 - lefttoright;
            res.push_back(tmp);
        }
        return res;
        
    }
};