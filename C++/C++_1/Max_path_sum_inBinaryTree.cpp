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

int maxPathSumUtil(Node *root, int &ans)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = maxPathSumUtil(root->left, ans);
    int right = maxPathSumUtil(root->right, ans);
    int nodeMax = max(max(root->data, root->data + left + right), max(root->data + left, root->data + right));
    ans = max(ans, nodeMax);
    int singlePathsum = max(root->data, max(root->data + left, root->data + right));
    return singlePathsum;
}

int maxPathSum(Node *root)
{
    int ans = INT_MIN;
    maxPathSumUtil(root, ans);
    return ans;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(10);
    root->left->left = new Node(20);
    root->left->right = new Node(1);
    root->right->right = new Node(-25);
    root->right->right->left = new Node(3);
    root->right->right->right = new Node(4);
    cout << maxPathSum(root) << endl;

    return 0;
}
// /*
//         10
//        /  \
//       2   10
//      / \    \
//    20   1  -25
//            /  \
//           3    4

// */