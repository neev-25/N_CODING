#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
Node *insert(Node *root, int target)
{
    if (!root)
    {
        Node *temp = new Node(target);
        return temp;
    }
    if (root->data > target)
    {
        root->left = insert(root->left, target);
    }
    else
    {
        root->right = insert(root->right, target);
    }
    return root;
}
void inorder(Node *root)
{
    if (!root)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
bool search(Node *root, int target)
{
    if (!root)
    {
        return 0;
    }
    if (root->data == target)
    {
        return 1;
    }
    else if (root->data > target)
    {
        search(root->left, target);
    }
    else
    {
        search(root->right, target);
    }
}
int main()
{
    int arr[] = {6, 3, 17, 5, 11, 18, 2, 1, 20, 14};
    Node *root = NULL;
    for (int i = 0; i < 10; i++)
    {
        root = insert(root, arr[i]);
    }
    // traverse
    inorder(root);
    cout << endl;
    cout << search(root, 13);

    return 0;
}