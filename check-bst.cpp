#include<iostream>

using namespace std;

struct node
{

    int data;
    node *left;
    node *right;
    node(int val)   // Constructor.
    {
        data = val;
        left = right = NULL;
    }

};

bool checkBST(node *root, int Min, int Max)
{

    if(root == NULL)
        return true;
    else
    {
        if(root->data < Min || root->data > Max)
            return false;
        return checkBST(root->left, Min, root->data) && checkBST(root->right, root->data, Max);
    }

}

int main()
{

    int Min = INT_MIN, Max = INT_MAX;
    node *root = new node(15);
    root->left = new node(10);
    root->right = new node(20);
    root->left->left = new node(5);
    root->left->left->left = new node(1);
    root->left->left->right = new node(7);
    root->right->left = new node(17);
    root->right->right = new node(25);
    cout << checkBST(root, Min, Max);
    return 0;

}
