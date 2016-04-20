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


// Reversing list.
/*
void reverseLinkedList(){

    if(head==NULL)
        return;
    node *t2 = reverseLinkedList(head);
    head = tail;
    tail = t2;

}

    if(temp == tail){
        return tail;
    }
    node* partial_tail = reverseLinkedList(temp->next);
    partial_tail->next = temp;
    temp->next = NULL;
    return temp;

/*

// Iterative Method.

void reverseLinkedList()
{
    while(head!=tail){
        node* Next = head->next;
        head->next = tail->next;
        tail->next = head;
        head = Next;
    }
    while(tail->next!=NULL)
        tail=tail->next;

}*/

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
/*
bool addCycle(){
    srand(time(NULL));
    node *temp = head;
    if(rand()%2==0)
        return false;
    while(temp!=NULL){
        if(rand()%2==1){
            tail->next = temp;
            return true;
        }
        temp = temp->next;
    }
    return false;
}
bool detectCycle()
{
    node* temp = head;
    node* temp2 = head;
    while(temp2!=NULL){
        temp = temp->next;
        temp2 = temp2->next;
        if(temp2!=NULL)
            temp2 = temp2->next;
        if(temp == temp2)
            return true;
    }
    return false;
}
*/

int main()
{

    node *head = NULL, *result;
    addNodeFront(&head, 1);
    addNodeFront(&head, 15);
    addNodeFront(&head, 20);
    addNodeBack(&head, 10);
    insertNode(&head, 1, -2);
    // deleteNode(&head, 2);
    // MergeSort(&head);
    print(&head);
    cout << endl;
    // reverseList(&head);
    reverseLinkedList(&head);
    print(&head);
    return 0;

}

