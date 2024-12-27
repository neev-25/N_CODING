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

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}
bool isbalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (isbalanced(root->left) == false)
    {
        return false;
    }
    if (isbalanced(root->right) == false)
    {
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->left->left = new Node(3);
    root1->left->right = new Node(4);
    root1->right = new Node(5);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);
    if (isbalanced(root1))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not Balanced" << endl;
    }

    return 0;
}
/*
            1
           / \
         2     5
        / \   /  \
       3   4  6   7
*/