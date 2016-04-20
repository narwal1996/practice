#include<iostream>

using namespace std;

struct node{
    int val;
    node *next; //pointer of type node as it points to data type node.
};

class LinkedList{
private:
    node *head; // starting of linked list
    node *tail; // end of linked list; In beginning head and tail points to null.
public:
    LinkedList(){ //constructor; this will be called as an when class object is declared.
        head = NULL;    //In beginning both head and tail points to NULL as my list is always from head to tail.
        tail = NULL;
    }
    void addNodeFirst(int val){
        node *temp = new node();    // temp points to the new node to be added.
        temp->val = val;
        temp->next = head;
        next = temp;
        if(tail == NULL)    // -> list was empty, on adding one element tail should point to head.
            tail = head;
    }
    void printLinkedList(){
        node *temp = head;
        while(temp != NULL){
            cout << temp->val;
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList L1;
    L1.addNodeFirst(1);
    L1.addNodeFirst(2);
    L1.addNodeFirst(-5);
    return 0;
}
