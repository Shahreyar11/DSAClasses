void preOrder(Node* root){
    fun(root);
}

void fun(Node* node){
    if(node == NULL){
        return;
    }
    cout << node->data;
    fun(node->left);
    fun(node->right);
    return;
}