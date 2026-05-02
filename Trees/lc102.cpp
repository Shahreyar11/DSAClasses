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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int lvlSize = q.size();
            vector<int> tmp;
            while(lvlSize--) { // it runs till levelSize becomes 0
                TreeNode* t = q.front(); // t node me q.front or first level ka element store karlia
                q.pop(); // fir use remove krdia
                tmp.push_back(t->val);  //t ki value push krdi vector me
                if(t->left != NULL){
                    q.push(t->left);
                }
                if(t->right != NULL){
                    q.push(t->right);
                }
            }
            res.push_back(tmp);
        }
        return res;
    }
};