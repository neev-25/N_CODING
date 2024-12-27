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

int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int sumNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->data + sumNodes(root->left) + sumNodes(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << countNodes(root);
    cout << endl;
    cout << sumNodes(root);

    return 0;
}
/*
            1
           / \
         2     5
        / \   /  \
       3   4  6   7
*/