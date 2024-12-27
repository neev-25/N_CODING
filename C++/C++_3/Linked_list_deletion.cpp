#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
Node *createll(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createll(arr, index + 1, size);
    return temp;
}
int main()
{
    //.'.'.'.'.'.'.'.'delete at head'.'.'.'.'.'.'.'.''.
    // Node *head;
    // head = NULL;
    // int arr[] = {2, 4, 6, 8, 10};
    // head = createll(arr, 0, 5);
    // Node *temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << "->";
    //     temp = temp->next;
    // }
    // cout << "NULL";
    // // delete Node at start
    // if (head != NULL)
    // {
    //     Node *temp = head;
    //     head = head->next;
    //     delete temp;
    // }
    // cout << endl;
    // Node *temp1 = head;
    // while (temp1 != NULL)
    // {
    //     cout << temp1->data << "->";
    //     temp1 = temp1->next;
    // }
    // cout << "NULL";

    //.'.'.'.'.'.'.'delete node at end'.'.'.'..'.'.'
    // Node *head;
    // head = NULL;
    // int arr[] = {2, 4, 6, 8, 10};
    // head = createll(arr, 0, 5);
    // if (head != NULL)
    // {
    //     // only one node exist
    //     {
    //         if (head->next == NULL)
    //         {
    //             Node *temp = head;
    //             head = NULL;
    //             delete temp;
    //         }
    //         // more than one node exiset
    //         else
    //         {
    //             Node *temp = head;
    //             Node *prev = NULL;
    //             // curr->next is not equal to null
    //             while (temp->next != NULL)
    //             {
    //                 prev = temp;
    //                 temp = temp->next;
    //             }
    //             prev->next = temp->next;
    //             delete temp;
    //         }
    //     }
    // }
    // Node *temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << "->";
    //     temp = temp->next;
    // }
    // cout << "this node is delete";

    //.'.'.'.'.'.'.'delete node at particular'.'.'.'..'.'.'
    Node *head;
    head = NULL;
    int arr[] = {2, 4, 6, 8, 10};
    head = createll(arr, 0, 5);
    int x = 7;
    Node *temp = head;
    if (head != NULL)
    {
        while (temp->next->data != x && temp != NULL)
        {
            temp = temp->next;
        }
        Node *cur = temp->next;
        temp->next = temp->next->next;
        delete cur;
    }
    Node *tmep1 = head;
    while (tmep1 != NULL)
    {
        cout << tmep1->data << "->";
        tmep1 = tmep1->next;
    }

    return 0;
}