#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
Node *createDLL(int arr[], int index, int size, Node *back)
{
    if (index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr, index + 1, size, temp);
    return temp;
}
int main()
{
    // Node *head = NULL;
    // // Insert at start
    // // LL doesn't exist
    // if (head == NULL)
    // {
    //     head = new Node(5);
    // }
    // // already LL exist
    // else
    // {
    //     Node *temp = new Node(5);
    //     temp->next = head;
    //     head->prev = temp;
    //     head = temp;
    // }
    // Node *trav = head;
    // while (trav)
    // {
    //     cout << "<-" << trav->data << "->";
    //     trav = trav->next;
    // }
    //;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    // Node *head = NULL, *tail = NULL;
    // // craete Doubly LL
    // int arr[] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < 5; i++)
    // {
    //     if (head == NULL)
    //     {
    //         head = new Node(arr[i]);
    //         tail = head;
    //     }
    //     else
    //     {
    //         Node *temp = new Node(arr[i]);
    //         tail->next = temp;
    //         temp->prev = tail;
    //         tail = temp;
    //     }
    // }
    // Node *trav = head;
    // while (trav)
    // {
    //     cout << "<-" << trav->data << "->";
    //     trav = trav->next;
    // }
    //;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    // create Doubly LL Recursion
    // Node *head = NULL;
    // int arr[] = {1, 2, 3, 4, 5};
    // head = createDLL(arr, 0, 5, NULL);
    // Node *trav = head;
    // while (trav)
    // {
    //     cout << "<-" << trav->data << "->";
    //     trav = trav->next;
    // }

    // Insert at any give position
    // Node *head = NULL;
    // int arr[] = {1, 2, 3, 4, 5};
    // head = createDLL(arr, 0, 5, NULL);
    // Node *trav = head;
    // while (trav)
    // {
    //     cout << trav->data << "->";
    //     trav = trav->next;
    // }
    // int pos = 2;
    // if (pos == 0)
    // {
    //     // LL not exist
    //     if (head == NULL)
    //     {
    //         head = new Node(5);
    //     }
    //     // ll exist
    //     else
    //     {
    //         Node *temp = new Node(5);
    //         temp->next = head;
    //         head->prev = temp;
    //         head = temp;
    //     }
    // }
    // else
    // {

    //     Node *curr = head;
    //     while (--pos)
    //     {
    //         curr = curr->next;
    //     }
    //     // insert at end
    //     if (curr->next == NULL)
    //     {
    //         Node *temp = new Node(5);
    //         temp->prev = curr;
    //         curr->next = temp;
    //     }
    //     else
    //     {
    //         Node *temp = new Node(5);
    //         temp->next = curr->next;
    //         temp->prev = curr;
    //         curr->next = temp;
    //         temp->next->prev = temp;
    //     }
    // }
    // cout << endl;
    // Node *trav2 = head;
    // while (trav2)
    // {
    //     cout << trav2->data << "->";
    //     trav2 = trav2->next;
    // }
    //;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    // Node *head = NULL;
    // int arr[] = {1, 2, 3, 4, 5};
    // head = createDLL(arr, 0, 2, NULL);
    // if (head != NULL)
    // {
    //     if (head->next == NULL)
    //     {
    //         delete head;
    //         head = NULL;
    //     }
    //     else
    //     {
    //         Node *temp = head;
    //         head = head->next;
    //         delete temp;
    //         head->prev = NULL;
    //     }
    // }
    // Node *trav2 = head;
    // while (trav2)
    // {
    //     cout << trav2->data << "->";
    //     trav2 = trav2->next;
    // }
    //;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    // Node *head = NULL;
    // int arr[] = {1, 2, 3, 4, 5};
    // head = createDLL(arr, 0, 5, NULL);
    // if (head != NULL)
    // {
    //     if (head->next == NULL)
    //     {
    //         delete head;
    //         head = NULL;
    //     }
    //     else
    //     {
    //         Node *curr = head;
    //         while (curr->next)
    //         {
    //             curr = curr->next;
    //         }
    //         curr->prev->next = NULL;
    //         delete curr;
    //     }
    // }
    // Node *trav2 = head;
    // while (trav2)
    // {
    //     cout << trav2->data << "->";
    //     trav2 = trav2->next;
    // }

    Node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    head = createDLL(arr, 0, 5, NULL);
    int pos = 1;
    if (pos == 1)
    {
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            head->prev = NULL;
        }
    }
    else
    {
        Node *curr = head;
        while (--pos)
        {
            curr = curr->next;
        }
        if (curr->next == NULL)
        {
            curr->prev->next = NULL;
            delete curr;
        }
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }
    }
    Node *trav2 = head;
    while (trav2)
    {
        cout << trav2->data << "->";
        trav2 = trav2->next;
    }

    return 0;
}