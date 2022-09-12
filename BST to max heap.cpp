/*
    Minimum Exchange :-

    Link:   https://practice.geeksforgeeks.org/problems/distributing-question-papers2513/1
*/

#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

/* Helper function that allocates a new node
with the given data and NULL left and right
pointers. */
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
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

void postorderTraversal(Node *root)
{
    if (!root)
        return;

    // recur on left subtree
    postorderTraversal(root->left);

    // then recur on right subtree
    postorderTraversal(root->right);

    // print the root's data
    cout << root->data << " ";
}

class Solution
{
private:
    void inorder(Node *root, vector<int> &arr)
    {
        if (root == NULL)
            return;

        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }

    void postorder(Node *root, vector<int> &arr, int &index)
    {
        if (root == NULL)
            return;

        postorder(root->left, arr, index);
        postorder(root->right, arr, index);
        root->data = arr[index++];
    }

public:
    void convertToMaxHeapUtil(Node *root)
    {
        vector<int> arr;

        inorder(root, arr);
        int index = 0;
        postorder(root, arr, index);
    }
};

int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string inp, ch;
        getline(cin, inp);

        struct Node *root = buildTree(inp);
        
        Solution ob;
        ob.convertToMaxHeapUtil(root);
        postorderTraversal(root);
        cout << "\n";
    }

    return 0;
}