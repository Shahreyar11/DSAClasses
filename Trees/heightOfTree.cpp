int height(TreeNode* root) {
    if (root == NULL) return -1;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return 1 + max(leftHeight, rightHeight);
}