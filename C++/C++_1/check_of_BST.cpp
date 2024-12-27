#include <bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isBST(Node *root, Node *min = NULL, Node *max = NULL)
{

    if (root == NULL)
    {
        return true;
    }
    if (min != NULL && root->data <= min->data)
    {
        return false;
    }
    if (max != NULL && root->data >= max->data)
    {
        return false;
    }
    bool leftvalid = isBST(root->left, min, root);
    bool rightvalid = isBST(root->right, root, max);
    return leftvalid && rightvalid;
}
int main()
{
    Node *root1 = new Node(4);
    root1->left = new Node(2);
    root1->right = new Node(5);
    root1->left->left = new Node(1);
    root1->left->right = new Node(3);
    if (isBST(root1, NULL, NULL))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}