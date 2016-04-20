#include <iostream>
#include<cmath>

using namespace std;

struct node{
    int val;
    node *next;
};

// Linked List is defined from head node to tail node. Here, we create a class LinkedList.
class LinkedList{
private:
    node *head;
    node *tail;
public:

    // constructor

    LinkedList(){

        head = NULL;

    }

    // Adding the node in front of the list.

    void addNodeFront(int val){

        node *temp = new node();
        temp->val = val;
        if(head == NULL){
            head = temp;
            return;
        }
        temp->next = head;
        head = temp;

    }

    // Adding a node at back of Linked List.

    void addNodeBack(int val){

        node *temp = new node();
        temp->val = val;
        if(head == NULL){
            head = temp;
            return;
        }
        tail->next = temp;
        tail = temp;

    }

    // Printing a Linked List from head to tail.

    void print(){

        node *temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }

    }

    // Adding a node after the node at position n.

    void addNode(int val, int n){
        node *temp1 = new node();
        node *temp2 = new node();
        temp2->val = val;
        temp1 = head;
        for(int i = 1; i < n-1; i++)
            temp1 = temp1->next;
        temp2->next = temp1->next;
        temp1->next = temp2;
    }
    /* void reverseList(){
        while(head != tail){
            node *Next = head->next;
            head->next = tail->next;
            tail->next = head;
            head = Next;
        }
        while(tail->next != NULL)
            tail = tail->next;
    } */

    // Reversing the Linked List and returning the head pointer to the reversed linked list.

    void reverseLinkedList(node **head){

        if(*head == tail){
            temp
            return;
        }

        reverseLinkedList(*head->next);
        node *temp = temp;
        temp->next = NULL;
        return temp;

    }
};

int main()
{
    LinkedList L1;
    L1.addNodeFront(1);
    L1.addNodeFront(5);
    L1.addNodeBack(-34);
    L1.addNodeFront(10);
    L1.addNode(123, 3);
    cout << L1.reverseLinkedList(head)->val << " ";
    //L1.print();
}

