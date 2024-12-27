#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
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
Node *createllI(int arr[], int index, int size, Node *prev)
{
    if (index == size)
    {
        return prev;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = prev;
    return createllI(arr, index + 1, size, temp);
}
int main()
{
    // // .........insert the node at begin.......
    // Node *head;
    // head = NULL;
    //  head = new Node(4);
    //   cout << head->data << endl;
    //   cout << head->next << endl;
    // int arr[] = {2, 4, 6, 8, 10};
    // // linked list not exist
    // for (int i = 0; i < 5; i++)
    // {
    //     if (head == NULL)
    //     {
    //         head = new Node(arr[i]);
    //     }
    //     // linked lkist not exist
    //     else
    //     {
    //         Node *temp;
    //         temp = new Node(arr[i]);
    //         temp->next = head;
    //         head = temp;
    //     }
    // }
    // // print the ll
    // Node *temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << "->";
    //     temp = temp->next;
    // }
    // cout<<"NULL";

    // //.............linked list at tail.............
    // Node *head, *tail;
    // tail = head = NULL;
    // int arr[] = {2, 4, 6, 8, 10};
    // for (int i = 0; i < 5; i++)
    // {
    //     // ll is empty
    //     if (head == NULL)
    //     {
    //         head = new Node(arr[i]);
    //         tail = head;
    //     }
    //     else
    //     // ll is exist
    //     {
    //         tail->next = new Node(arr[i]);
    //         tail = tail->next;
    //     }
    // }
    // Node *temp;
    // temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << "->";
    //     temp = temp->next;
    // }
    // cout << "NULL";

    //...........using recursion create LL..............
    // Node *head;
    // head = NULL;
    // int arr[] = {2, 4, 6, 8, 10};
    // head = createll(arr, 0, 5);
    // Node *temp;
    // temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << "->";
    //     temp = temp->next;
    // }
    // cout << "NULL";

    //........using recusion createell and insert at hedad.........
    // Node *head;
    // head = NULL;
    // int arr[] = {2, 4, 6, 8, 10};
    // head = createllI(arr, 0, 5, NULL);
    // Node *temp;
    // temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << "->";
    //     temp = temp->next;
    // }
    // cout << "NULL";

    //.......insert Node at particular position......
    Node *head;
    head = NULL;
    int arr[] = {2, 4, 6, 8, 10};
    head = createll(arr, 0, 5);
    int x = 3;
    int value = 30;
    Node *temp = head;
    x--;
    while (x--)
    {
        temp = temp->next;
    }
    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}