#include <iostream>
#include<cmath>

using namespace std;

struct node{
    int val;
    node *next;
};
class LinkedList{
private:
    node *head;
    node *tail;
public:
    LinkedList(){
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
        head = temp;
    }
    void addNodeBack(int val){
        node *temp = new node();
        temp->val = val;
        if(tail == NULL){
            head = temp = NULL;
            return;
        }
        tail->next = temp;
        tail = temp;
    }
    void print(){
        node *temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
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
    void reverseList(){

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
    L1.print();
}

