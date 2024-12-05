// WAP with class bill. The users have the options to pay the bill either  by cheque or by cash. Use the inheritance to model this situation.
#include <iostream>
using namespace std;

// Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor to create a new node
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Class for the Binary Tree
class BinaryTree {
public:
    // In-order Traversal: Left ? Root ? Right
    void inorder(Node* node) {
        if (node == nullptr) return;

        inorder(node->left);         // Visit left subtree
        cout << node->data << " ";  // Print node data
        inorder(node->right);       // Visit right subtree
    }

    // Pre-order Traversal: Root ? Left ? Right
    void preorder(Node* node) {
        if (node == nullptr) return;

        cout << node->data << " ";  // Print node data
        preorder(node->left);       // Visit left subtree
        preorder(node->right);      // Visit right subtree
    }

    // Post-order Traversal: Left ? Right ? Root
    void postorder(Node* node) {
        if (node == nullptr) return;

        postorder(node->left);      // Visit left subtree
        postorder(node->right);     // Visit right subtree
        cout << node->data << " ";  // Print node data
    }
};

int main() {
    // Creating a simple binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    BinaryTree bt;

    // Perform traversals
    cout << "In-order Traversal: ";
    bt.inorder(root);
    cout << endl;

    cout << "Pre-order Traversal: ";
    bt.preorder(root);
    cout << endl;

    cout << "Post-order Traversal: ";
    bt.postorder(root);
    cout << endl;

    return 0;
}

