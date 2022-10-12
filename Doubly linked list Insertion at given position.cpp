/*
    Doubly linked list Insertion at given position :-

    Link:   https://practice.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1
*/

#include <iostream>
using namespace std;

/* a Node of the doubly linked list */
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

void addNode(Node *head, int pos, int data);

Node *insert(Node *head, int x)
{
    if (head == NULL)
        return new Node(x);

    Node *n = new Node(x);

    head->next = n;
    n->prev = head;
    head = n;

    return head;
}

void printList(Node *head)
{
    Node *temp = head;
    if (temp != NULL)
    {

        while (temp->next != NULL)
            temp = temp->next;
        while (temp->prev != NULL)
            temp = temp->prev;
    }
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    cout << "\n";
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        Node *head = NULL;
        Node *root = NULL;

        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);

            head = insert(head, x);

            if (root == NULL)
                root = head;
        }

        head = root;
        int pos, data;
        cin >> pos >> data;

        addNode(head, pos, data);
        printList(head);
    }

    return 0;
}

void addNode(Node *head, int pos, int data)
{
    Node *newNode = new Node(data);
    Node *temp = head;

    int count = 0;

    while (count != pos)
    {
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
}