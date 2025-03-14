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
Node *LCA(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    Node *left = LCA(root->left, n1, n2);
    Node *right = LCA(root->right, n1, n2);
    if (left != NULL && right != NULL)
    {
        return root;
    }
    if (left == NULL && right == NULL)
    {
        return NULL;
    }
    if (left != NULL)
    {
        return LCA(root->left, n1, n2);
    }
    return LCA(root->right, n1, n2);
}

int findDist(Node *root, int k, int dist)
{
    if (root == NULL)
        return -1;
    if (root->data == k)
    {
        return dist;
    }
    int left = findDist(root->left, k, dist + 1);
    if (left != -1)
    {
        return left;
    }
    return findDist(root->right, k, dist + 1);
}

int distbtwNodes(Node *root, int n1, int n2)
{
    Node *lca = LCA(root, n1, n2);
    int d1 = findDist(lca, n1, 0);
    int d2 = findDist(lca, n2, 0);

    return d1 + d2;
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
    cout << distbtwNodes(root1, 3, 5);

    return 0;
}
/*
            1
           / \
         2     5
        / \   /  \
       3   4  6   7
*/