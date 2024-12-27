#include <bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inorderTraveral(Node *node)
{
    if (node == NULL)
        return;
    inorderTraveral(node->left);
    cout << node->data << "<-";
    inorderTraveral(node->right);
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << "inorder traversal of the binary tree is :";
    inorderTraveral(root);
    cout << endl;

    return 0;
}
/*
            1
           / \
         2     5
        / \   /  \
       3   4  6   7
*/