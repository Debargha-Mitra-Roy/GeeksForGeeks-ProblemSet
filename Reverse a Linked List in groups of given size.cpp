/*
    Reverse a Linked List in groups of given size :-

    Link:   https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
*/

#include <iostream>
using namespace std;

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

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

class Solution
{
public:
    struct node *reverse(struct node *head, int k)
    {
        node *prevPtr = NULL;
        node *currPtr = head;
        node *nextPtr;

        int count = 0;

        while (currPtr != NULL && count < k)
        {
            nextPtr = currPtr->next;
            currPtr->next = prevPtr;

            prevPtr = currPtr;
            currPtr = nextPtr;

            count++;
        }

        if (nextPtr != NULL)
            head->next = reverse(nextPtr, k);

        return prevPtr;
    }
};

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin >> t;

    while (t--)
    {
        struct node *head = NULL;
        struct node *temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            if (i == 0)
            {
                head = new node(value);
                temp = head;
            }

            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }

    return 0;
}