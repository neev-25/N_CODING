#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
Node *Binarytree()
{
    int x;
    cin >> x;
    Node *root;
    if (x == -1)
    {
        return NULL;
    }
    Node *temp = new Node(x);
    cout << "enter the left node of" << x << " ";
    temp->left = Binarytree();
    cout << "enter the right node of" << x << " ";
    temp->right = Binarytree();
    return temp;
}
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    cout << "enter the root node" << " ";
    Node *root = Binarytree();
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;

    return 0;
}