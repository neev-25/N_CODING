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

void zigzagtravasal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<Node *> currlevel;
    stack<Node *> nextlevel;
    bool lefttoright = true;
    currlevel.push(root);
    while (!currlevel.empty())
    {
        Node *temp = currlevel.top();
        currlevel.pop();
        if (temp != NULL)
        {
            cout << temp->data << " ";
            if (lefttoright)
            {
                if (temp->left != NULL)
                {
                    nextlevel.push(temp->left);
                }
                if (temp->right != NULL)
                {
                    nextlevel.push(temp->right);
                }
            }
            else
            {
                if (temp->right != NULL)
                {
                    nextlevel.push(temp->right);
                }
                if (temp->left != NULL)
                {
                    nextlevel.push(temp->left);
                }
            }
        }
        if (currlevel.empty())
        {
            lefttoright = !lefttoright;
            swap(currlevel, nextlevel);
        }
    }
}

int main()
{
    Node *root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(10);
    zigzagtravasal(root);
    cout << endl;

    return 0;
}
// mendpara neev bharartbhai
