#include<bits/stdc++.h>

using namespace std;

struct treeNode{
    int val;
    treeNode *left;
    treeNode *right;
};
void preOrder(treeNode *Node){
    if(Node == NULL)
        return;
    cout << Node->val << " ";
    preOrder(Node->left);
    preOrder(Node->right);
}
void inOrder(treeNode *Node){
    if(Node == NULL)
        return;
    inOrder(Node->left);
    cout << Node->val << " ";
    inOrder(Node->right);
}
void levelOrder(treeNode *Node){
    if(Node == NULL)
        return;
    queue<treeNode*> q;
    q.push(Node);
    while(!q.empty()){
        treeNode *current = q.front();
        cout << current->val << " ";
        if(current->left != NULL)
            q.push(current->left);
        if(current->right != NULL)
            q.push(current->right);
        q.pop();
    }
}
int main()
{
    treeNode *a, *b, *c, *d, *e, *f;
    a = new treeNode();
    b = new treeNode();
    c = new treeNode();
    d = new treeNode();
    e = new treeNode();
    f = new treeNode();
    a->val = 1;
    b->val = 2;
    c->val = 3;
    d->val = 4;
    e->val = 5;
    f->val = 6;
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = NULL;
    d->left = d->right = e->left = e->right = f->left = f->right = NULL;
    preOrder(a);
    cout << endl;
    inOrder(a);
    cout << endl;
    levelOrder(a);
    return 0;
}
