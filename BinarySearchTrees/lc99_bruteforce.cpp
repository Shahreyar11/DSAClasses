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

 // FIRST I HAVE TO UNDERSTAND THIS, I DID JUST BY COPYING THE BRUTEFORCE
class Solution {
public:
    vector<int> a;

    void tree(TreeNode* root){
        if(root == NULL) return;

        tree(root->left);
        a.push_back(root->val);
        tree(root->right);
    }

    void fix(TreeNode* root, int &i){
        if(root == NULL) return;

        fix(root->left, i);
        root->val = a[i++];   // put back corrected values
        fix(root->right, i);
    }

    void recoverTree(TreeNode* root) {
        tree(root);

        int n = a.size();
        int wrong = 0;
        int w1first, w1second, w2first, w2second;

        // find wrong pairs
        for(int i = 0; i < n-1; i++){
            if(a[i] > a[i+1]){
                if(wrong == 0){
                    w1first = i;
                    w1second = i+1;
                }
                else{
                    w2first = i;
                    w2second = i+1;
                }
                wrong++;
            }
        }

        // fix array
        if(wrong == 1){
            swap(a[w1first], a[w1second]);
        }
        else{
            swap(a[w1first], a[w2second]);
        }

        // write back to tree
        int i = 0;
        fix(root, i);
    }
};