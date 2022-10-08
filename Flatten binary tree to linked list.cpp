/*
    Flatten binary tree to linked list :-

    Link:   https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1
*/

#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
};

/* Utility that allocates a new Node with the given key  */
Node *newNode(int key)
{
    Node *node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return (node);
}

Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;

        if (i >= ip.size())
            break;

        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }

        i++;
    }

    return root;
}

void inorder(struct Node *root)
{
    // Base condition
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

class Solution
{
public:
    void flatten(Node *root)
    {
        if (root == NULL)
            return;

        flatten(root->left);

        if (root->left != NULL)
        {
            Node *r = root->right;
            root->right = root->left;
            Node *a = root;

            while (a->right != NULL)
            {
                a = a->right;
            }

            a->right = r;
            root->left = NULL;
        }

        flatten(root->right);
    }
};

int main()
{

    int t;
    cin >> t;
    getchar();

    while (t--)
    {
        string str;
        getline(cin, str);

        Node *root = buildTree(str);
        Solution ob;
        ob.flatten(root);
        inorder(root);

        cout << "\n";
    }

    return 0;
}