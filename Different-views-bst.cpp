#include<iostream>

using namespace std;

struct node
{

    int data;
    node *left;
    node *right;
    node(int val)
    {
        left = right = NULL;
        data = val;
    }

};

void leftView(node *root, int level, int *max_level)
{

    if(root == NULL)
        return;
    if(*max_level < level)
    {
        cout << root->data << " ";
        *max_level = level;
    }
    leftView(root->left, level+1, max_level);
    leftView(root->right, level+1, max_level);

}

void topView(node *root)
{

    if(root == NULL)
        return;


}

int main()
{

    node *root = new node(12);
    int max_level = 0;
    root->left = new node(10);
    root->right = new node(30);
    root->right->left = new node(25);
    root->right->right = new node(40);
    leftView(root, 1, &max_level);
    return 0;

}
