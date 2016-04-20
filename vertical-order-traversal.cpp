#include<iostream>

using namespace std;

struct node
{

    int data;
    node *left, *right;
    node(int val)
    {
        left = right = NULL;
        data = val;
    }

};

void MaxMinHD(node *root, int *Max, int *Min, int hd)
{

    if(root == NULL) return;
    // Update min and max.
    if(hd < *Min)
        *Min = hd;
    else if(hd > *Max)
        *Max = hd;
    // Recurse for left and right subtrees.
    MaxMinHD(root->left, Max, Min, hd-1);
    MaxMinHD(root->right, Max, Min, hd+1);

}

void print_vertical_line(node *root, int line_no, int hd)
{

    if(root == NULL) return;
    if(line_no == hd)
        cout << root->data << " ";
    print_vertical_line(root->left, line_no, hd-1);
    print_vertical_line(root->left, line_no, hd+1);

}

void vertical_order(node *root)
{

    int Max = 0, Min = 0;
    MaxMinHD(root, &Max, &Min, 0);
    for(int line_no = Min; line_no <= Max; line_no++)
        print_vertical_line(root, line_no, 0);

}

int main()
{

    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->left->right = new node(8);
    root->right->right->right = new node(9);
    return 0;

}
