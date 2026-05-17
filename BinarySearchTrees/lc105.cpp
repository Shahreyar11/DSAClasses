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
    unordered_map<int,int> index;
    int idx = 0;

    TreeNode* fun(vector<int> &preorder, int low, int high){
        if(low > high) return NULL;   // ✅ base case

        int val = preorder[idx];
        TreeNode* node = new TreeNode(val);
        idx++;

        int id = index[val];

        node->left = fun(preorder, low, id - 1);
        node->right = fun(preorder, id + 1, high);

        return node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0; i < inorder.size(); i++){
            index[inorder[i]] = i;
        }
        return fun(preorder, 0, inorder.size() - 1);
    }
};