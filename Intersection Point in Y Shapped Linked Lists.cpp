/*
    Intersection Point in Y Shapped Linked Lists :-

    LINK:	https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
*/

#include <iostream>
using namespace std;

/* Link list Node */
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

int intersectPoint(struct Node *head1, struct Node *head2);

Node *inputList(int size)
{
    if (size == 0)
        return NULL;

    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

/* Driver program to test above function */
int main()
{
    int T, n1, n2, n3;
    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2 >> n3;

        Node *head1 = inputList(n1);
        Node *head2 = inputList(n2);
        Node *common = inputList(n3);

        Node *temp = head1;

        while (temp != NULL && temp->next != NULL)
        {
            temp = temp->next;
        }

        if (temp != NULL)
            temp->next = common;

        temp = head2;

        while (temp != NULL && temp->next != NULL)
        {
            temp = temp->next;
        }

        if (temp != NULL)
            temp->next = common;

        cout << intersectPoint(head1, head2) << "\n";
    }

    return 0;
}

int length(Node *&head)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}

int intersectPoint(Node *head1, Node *head2)
{
    int len1 = length(head1);
    int len2 = length(head2);

    int diff = 0;

    Node *ptr1, *ptr2;

    if (len1 > len2)
    {
        diff = len1 - len2;
        ptr1 = head1;
        ptr2 = head2;
    }

    else
    {
        diff = len2 - len1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (diff)
    {
        ptr1 = ptr1->next;

        if (ptr1 == NULL)
            return -1;

        diff--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
            return ptr1->data;

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}