
#include<stdio.h>
#include<stdlib.h>

class node
{
public:
    int key;
    struct node* left;
    struct node* right;
    node(int k)
    {
        key = k;
        left = nullptr;
        right = nullptr;
    }
};


class binarytree
{
    node* root;
public:   
     node* insert(node* Node, int val)
    {
        if (Node == NULL)
            return new node(val);

        if (root->key < val)
            root->right = insert(Node->left, val);

        else if (root->key > val)
            root->left = insert(Node->right, val);
        return Node;
    }
public:
    void inorder(struct node* root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }

    void preorder(struct node* root)
    {
        if (root == NULL)
            return;
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(struct node* root)
    {
        if (root == NULL)
            return;

        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->key);
    }
};
int main()
{
    binarytree bt;
    bt.insert(25);
    root = insert(root, 50);
    root = insert(root, 70);
    root = insert(root, 90);
    root = insert(root, 66);
    root = insert(root, 35);
    root = insert(root, 44);
    root = insert(root, 31);
    root = insert(root, 15);
    root = insert(root, 22);
    root = insert(root, 24);
    root = insert(root, 18);
    root = insert(root, 10);
    root = insert(root, 12);
    root = insert(root, 4);


    inorder(root);
    printf("\n==============================\n");
    preorder(root);
    printf("\n==============================\n");
    postorder(root);

    return 0;
}
