#include<bits/stdc++.h>

using namespace std;

// Creating a node where val refers to data in node and next is a pointer to next node.

struct node{

    int data;
    node *next;

};

// Linked List is defined from head node to tail node. Here, we create a class LinkedList.

// Adding the node in front of the list.

void addNodeFront(node **head, int val)
{

    node *temp = new node();
    temp->data = val;
    temp->next = *head;
    *head = temp;

}

// Adding a node at back of linked list.

void addNodeBack(node **head, int val)
{

    node *temp = new node();
    temp->data = val;
    node *temp1;
    temp1 = *head;
    while(temp1->next != NULL)      // Traversing through the linked list.
        temp1 = temp1->next;
    temp->next = temp1->next;
    temp1->next = temp;

}

// Inserting a node after a position.

void insertNode(node **head, int position, int val)
{

    if(*head == NULL)
        return;
    node *temp = new node();
    temp->data = val;
    node *prev = *head;
    int counter = 0;
    while(counter < position && prev != NULL)
    {
        counter++;
        prev = prev->next;
    }
    temp->next = prev->next;
    prev->next = temp;

}

// Deleting the node at a given position (starting from 0 to length(list)-1).

void deleteNode(node **head, int position)
{

    if(*head == NULL)
        return;
    node *temp = *head;
    int counter = 1;
    while(counter < position)
    {
        counter++;
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL)
        return;
    node *nex = temp->next->next;
    delete(temp->next);
    temp->next = nex;

}

// Reverse a Linked List - Iterative Method.

void reverseList(node **head)
{

    node *prev = NULL;
    node *curr = *head;
    node *next;
    while(next != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;

}

// Reverse List - Recursion.

void reverseLinkedList(node **head)
{

    if(*head == NULL)
        return;
    node *first = *head;
    node *rest = first->next;
    if(rest == NULL)
        return;
    reverseLinkedList(&rest);
    first->next->next = first;
    first->next = NULL;
    *head = rest;

}

/* finding the middle node and sliting the lidt into two equal parts.
   Advance temp2 2 nodes and temp 1 node on each iteration.
   At end, temp would be pointing at 1 less than midpoint. */

void split(node *head, node **headA, node **headB)
{

    *headA = head;
    node *slow, *fast;
    slow = head;
    fast = head;
    fast = fast->next;
    while(fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    *headB = slow->next;
    slow->next = NULL;

}

// Merge the two Linked Lists.

node *Merge(node *headA, node *headB){

    if(headA == NULL)
        return headB;
    else if(headB == NULL)
        return headA;
    node *result = NULL;
    if(headA->data <= headB->data)
    {
        result = headA;
        result->next = Merge(headA->next, headB);
    }
    else
    {
        result = headB;
        result->next = Merge(headA, headB->next);
    }
    return result;

}

// Merge Sort

void MergeSort(node **headRef){

    node *head = *headRef;
    node *Front;
    node *Back;
    if(head == NULL || head->next == NULL)
        return;
    split(*headRef, &Front, &Back);
    MergeSort(&Front);
    MergeSort(&Back);
    *headRef = Merge(Front, Back);

}

void print(node **head)
{

    node *temp = *head;
    while(temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data;

}

// Rotating the linked list counter-clockwise by k nodes.

void rotateList(node **head, int k)
{

    if(*head == NULL || k == 0)
        return;
    node *temp = *head, *temp1 = *head;
    for(int i = 1; i < k; i++)
        temp = temp->next;
    while(temp1->next != NULL)
        temp1 = temp1->next;
    temp1->next = *head;
    *head = temp->next;
    temp->next = NULL;

}

int main()
{

    node *head = NULL, *second;
    addNodeFront(&head, 6);
    addNodeFront(&head, 5);
    addNodeFront(&head, 9);
    addNodeFront(&head, 5);
    addNodeFront(&head, 7);
    addNodeFront(&second, 4);
    addNodeFront(&second, 5);
    // deleteNode(&head, 2);
    // MergeSort(&head);
    print(&head);
    cout << endl;
    // reverseList(&head);
    // reverseLinkedList(&head);
    print(&head);
    cout << endl;
    rotateList(&head, 4);
    print(&head);
    return 0;

}

