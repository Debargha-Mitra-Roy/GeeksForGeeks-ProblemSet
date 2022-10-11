/*
    Node at a given index in linked list :-

    Link:   https://practice.geeksforgeeks.org/problems/node-at-a-given-index-in-linked-list/1
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Link list node */
struct node
{
    int data;
    struct node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct node *push(struct node *head, int d)
{

    struct node *new_node =
        (struct node *)malloc(sizeof(struct node));

    new_node->data = d;
    new_node->next = NULL;

    if (head == NULL)
        return new_node;

    struct node *h = head;

    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = new_node;

    return h;
}

int GetNth(struct node *head, int index);

/* Driver program to test above function*/
int main()
{
    int T, i, n, l, k;

    cin >> T;

    while (T--)
    {
        struct node *head = NULL;

        cin >> n >> k;
        for (i = 1; i <= n; i++)
        {
            cin >> l;
            head = push(head, l);
        }

        printf("%d\n", GetNth(head, k));
        getchar();
    }
    return 0;
}

int GetNth(struct node *head, int index)
{
    if (head == NULL)
        return -1;

    if (index == 1)
        return head->data;

    return GetNth(head->next, index - 1);
}