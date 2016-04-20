#include<iostream>

using namespace std;

struct node{
    int val;
    node *next;
    node *previous;
};

class doublyLinkedList{
private:
    node *head;
    node *tail;
public:
    doublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void addNodeFront(int val){
        node *temp = new node();
        temp->val = val;
        if(head == NULL){
            head = tail = temp;
            return;
        }
        temp->next = head;
        head->previous = temp;
        head = temp;
    }
    void addNodeBack(int val){
        node *temp = new node();
        temp->val = val;
        if(tail == NULL){
            head = tail = temp;
            return;
        }
        tail->next = temp;
        temp->previous = tail;
        tail = temp;
    }
    void addNode(int val, int key){
        node *temp1 = new node();
        node *temp2 = new node();
        temp1 = head;
        while(temp1->val != key){
            temp1 = temp1->next;
        }
        temp2->val =val;
        temp1->next = temp2;
        temp

    }
    void print(){
        node *temp = new node();
        temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    doublyLinkedList D1;
    D1.addNodeFront(1);
    D1.addNodeFront(-44);
    D1.addNodeBack(-3645);
    D1.addNodeFront(123);
    D1.print();
    return 0;
}
