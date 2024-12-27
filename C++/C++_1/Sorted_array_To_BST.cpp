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
Node *sortedArrayToBST(int arr[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    int mid = (start + end) / 2;
    Node *root = new Node(arr[mid]);
    root->left = sortedArrayToBST(arr, start, mid - 1);
    root->right = sortedArrayToBST(arr, mid + 1, end);
    return root;
}
void preorderprint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorderprint(root->left);
    preorderprint(root->right);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    Node *root = sortedArrayToBST(arr, 0, 4);
    preorderprint(root);
    cout << endl;

    return 0;
}
// my name is neev i am very proundfull on my fathe because of my father teain me very well