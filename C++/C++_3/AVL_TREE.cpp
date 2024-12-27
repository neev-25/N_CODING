#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    int height; 
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
        height = 1;
    }
};
int getheight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->height;
}
int getbalance(Node *root)
{
    return getheight(root->left) - getheight(root->right);
}
Node *rightrotation(Node *root)
{
    Node *child = root->left;
    Node *childright = child->right;
    child->right = root;
    root->left = childright;
    root->height = 1 + max(getheight(root->left), getheight(root->right));
    child->height = 1 + max(getheight(child->left), getheight(child->right));
    return child;
}
Node *leftrotation(Node *root)
{
    Node *child = root->right;
    Node *childleft = child->left;
    child->left = root;
    root->right = childleft;
    root->height = 1 + max(getheight(root->left), getheight(root->right));
    child->height = 1 + max(getheight(child->left), getheight(child->right));
    return child;
}
Node *insert(Node *root, int key)
{
    // doesn't eixst
    if (root == NULL)
    {
        return new Node(key);
    }
    // already exists
    if (key < root->data) // left side
    {
        root->left = insert(root->left, key);
    }
    else if (key > root->data) // right side
    {
        root->right = insert(root->right, key);
    }
    else
    {
        return root; // duplicate not allowed
    }
    // update hight
    root->height = 1 + max(getheight(root->left), getheight(root->right));
    // balance
    int balance = getbalance(root);
    // LL case
    if (balance > 1 && root->left->data > key)
    {
        return rightrotation(root);
    }
    // RR case
    else if (balance < -1 && root->right->data < key)
    {
        return leftrotation(root);
    }
    // LR case
    else if (balance > 1 && root->left->data < key)
    {
        root->left = leftrotation(root->left);
        return rightrotation(root);
    }
    // RL case
    else if (balance < -1 && root->right->data > key)
    {
        root->right = rightrotation(root->right);
        return leftrotation(root);
    }
    // NO unblanace
    else
    {
    return root;
    }
}
void inorder(Node *root)
{
    if (!root)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 50);
    root = insert(root, 70);
    root = insert(root, 5);
    root = insert(root, 100);
    root = insert(root, 95);
    inorder(root);

    return 0;
}