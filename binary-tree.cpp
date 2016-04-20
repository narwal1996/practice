#include<iostream>

using namespace std;

struct node
{

    int data;
    node *left;
    node *right;
    node(int val)   // Constructor
    {
        data = val;
        left = right = NULL;
    }

};

// Find Max of binary tree using recursion.

node *Max(node *root)
{

    // Base case
    if(root->left == NULL || root->right == NULL)
        return root;
    node *left = Max(root->left);   // max for left part
    node *right = Max(root->right); // max for right part
    node *temp = NULL;
    if(left->data < right->data)
        temp = right;
    else
        temp = left;
    if(root->data > temp->data)
        temp = root;
    return temp;

}

// Find max without recursion.


int main()
{

    node *root = new node(10);
    root->left = new node(18);
    root->right = new node(17);
    root->left->left = new node(34);
    root->left->right = new node(45);
    root->right->left = new node(105);
    root->right->right = new node(90);
    root->left->left->left = new node(100);
    root->left->left->right = new node(95);
    cout << Max(root)->data;
    return 0;

}
