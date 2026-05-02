void PostOrder(Node* root){
    fun(root);
}

void fun(Node* node){
    if(node == NULL){
        return;
    }
    fun(node->left);
    fun(node->right);
    cout<< node->data;
    return;
}

