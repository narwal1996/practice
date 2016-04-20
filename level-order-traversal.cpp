#include<iostream>
#include<queue>

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

/*  level order traversal.
    1. Visit the node (enqueue the root)
    2. While traversing level i, keep all the elements at level i+1 in queue.
    3. Go to next level and visit all nodes at that level.
    4. Repeat this until all levels are completed.
    Time --> O(n), Space --> O(n).
*/

void levelorder(node *root)
{

    if(root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while(!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }

}


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
    levelorder(root);
    return 0;

}

