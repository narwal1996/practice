#include<iostream>

using namespace std;

struct node
{

    int data;
    node *left;
    node *right;
    node *parent;

};

//Function to find some data in the tree.

node *Search(node *tree, int key)
{

    if(tree == NULL) return NULL;
    else if(tree->data == key) return tree;
    else if(key < tree->data)
        return Search(tree->left, key);
    else
        return Search(tree->right, key);

}

// Function to find Node with maximum value in a BST.


node *Max(node *tree)
{

    if(tree->right == NULL)
        return tree;
    return Max(tree->right);

}

// Function to find Node with minimum value in a BST.

node *Min(node *tree)
{

    if(tree->left == NULL)
        return tree;
    return Min(tree->left);

}

/*  Insert() -- given a binary search tree and a number, insert a new
    node with the given number into the tree in the correct place. */

void insertNode(node **tree, int val)
{

    node *temp = NULL;
    if(!(*tree))
    {
        temp = new node;
        temp->left = temp->right = temp->parent = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }

    node *temp1 = new node;

    if(val < (*tree)->data)
    {
        temp1 = *tree;
        insertNode(&(*tree)->left, val);
        (*tree)->parent = temp1;
    }

    else if(val > (*tree)->data)
    {
        temp1 = *tree;
        insertNode(&(*tree)->right, val);
        (*tree)->parent = temp1;
    }

}

// Function to visit nodes in Preorder.

void preorder(node *root)
{

    if(root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}

// Function to visit nodes in Inorder.

void inorder(node *root)
{

    if(root == NULL)
        return;
    preorder(root->left);
    cout << root->data << " ";
    preorder(root->right);

}

// Function to visit nodes in Postorder.

void postorder(node *root)
{

    if(root == NULL)
        return;
    preorder(root->left);
    preorder(root->right);
    cout << root->data << " ";

}

//Function to find Successor in a BST.

node *Successor(node *tree, int key)
{

    // Search the Node - O(h).
    node *current = Search(tree, key);
    if(current == NULL) return NULL;

    //Case 1: Node has right subtree.
    if(current->right != NULL)
        return Min(current->right);    // O(h)

    //Case 2: No right subtree  - O(h).
    else
    {
        node *successor = NULL;
        node *parent = tree;
        while(parent != current)
        {
            if(key < parent->data)
            {
                // so far this is the deepest node for which current node is in left.
                successor = parent;
                parent = parent->left;
            }
            else
                parent = parent->right;
        }
        return successor;
    }

}

int main()
{
    // tree refers to root of BST.
    node *tree = NULL;
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
        insertNode(&tree, arr[i]);
    preorder(tree);
    cout << endl;
    cout << (Successor(tree, 19))->data;
    return 0;
}
