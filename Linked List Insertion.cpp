/*
    Linked List Insertion :-

    Link:   https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

class Solution
{
public:
    // Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x)
    {
        Node *node = new Node(x);

        if (head == NULL)
            return node;

        node->next = head;
        head = node;

        return head;
    }

    // Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)
    {
        Node *node = new Node(x);

        if (head == NULL)
            return node;

        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = node;

        return head;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin >> data;
            cin >> indicator;

            Solution obj;

            if (indicator)
                head = obj.insertAtEnd(head, data);
            else
                head = obj.insertAtBegining(head, data);
        }

        printList(head);
    }

    return 0;
}