struct Node {
    int data;
    Node* left;
    Node* right;
};

// data → stores value
// left → pointer to left child
// right → pointer to right child

// 👉 So Node* left means:
// "this will store the address of another Node"

queue<Node*> q;
// If you use queue<Node*> ✅
// Stores only address
// No copying
// You can access actual tree nodes