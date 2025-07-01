#include <iostream>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;
    Node(int k) {
        key = k;
        left = nullptr;
        right = nullptr;
    }
};

class Binaryt {
private:
    Node* root;

    Node* insert(Node* node, int val) {
        if (node == nullptr)
            return new Node(val);

        if (val < node->key)
            node->left = insert(node->left, val);
        else if (val > node->key)
            node->right = insert(node->right, val);

        return node;
    }

    void inorder(Node* node) {
        if (node == nullptr)
            return;
        inorder(node->left);
        cout << node->key << " ";
        inorder(node->right);
    }

    void preorder(Node* node) {
        if (node == nullptr)
            return;
        cout << node->key << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node* node) {
        if (node == nullptr)
            return;
        postorder(node->left);
        postorder(node->right);
        cout << node->key << " ";
    }

public:
    Binaryt() {
        root = nullptr;
    }

    void insert(int val) {
        root = insert(root, val);
    }

    void inorder() {
        inorder(root);
        cout << endl;
    }

    void preorder() {
        preorder(root);
        cout << endl;
    }

    void postorder() {
        postorder(root);
        cout << endl;
    }
};

int main() {
    Binaryt bt;
    
        bt.insert(10);
        bt.insert(20);
        bt.insert(30);

  
    bt.inorder();

    cout << "==============================\n";

    bt.preorder();

    cout << "==============================\n";

    bt.postorder();

    return 0;
}
