#include<bits/stdc++.h>
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
        if(head==NULL){
            head = tail = temp;
            return ;
        }
        temp->next = head;
        head = temp;
    }
    void addNodeBack(int val){
        node *temp = new node();
        temp->val = val;
        if(head == NULL){
            head = tail = temp;
        }
        tail->next = temp;
        tail = tail->next;
    }
    node* findMid(){
        node* temp = head;
        node* temp2 = head;
        while(temp2!=NULL){
            temp2 = temp2->next;
            if(temp2!=NULL)
                temp2 = temp2->next;
            else
                break;
            temp = temp->next;
        }
        return temp;
    }
    bool palindrome(){
        //find the middle element.
        node *Mid = findMid();
        node *Head2 = Mid->next;
        Mid->next = NULL;
        node *Tail2 = tail;
        //reverse Head2 to Tail2.
        while(Head2!=Tail2){
            node* Next = Head2->next;
            Head2->next = Tail2->next;
            Tail2->next = Head2;
            Head2 = Next;
        }
        while(Tail2->next!=NULL)
            Tail2=Tail2->next;
        //checking whether palindrome.
        bool ans = true;
        node* Start = head;
        node* Start2 = Head2;
        while(Start!=NULL && Start2!=NULL){
            if(Start->val != Start2->val)
                ans = false;
            Start=Start->next;
            Start2 = Start2->next;
        }
        //reverse Head2 to Tail2 again.
        while(Head2!=Tail2){
            node* Next = Head2->next;
            Head2->next = Tail2->next;
            Tail2->next = Head2;
            Head2 = Next;
        }
        while(Tail2->next!=NULL)
            Tail2=Tail2->next;
        //join the two parts again.
        Mid->next = Head2;
        return ans;
    }
    node* reverseLinkedList(node *temp){
        if(temp == tail){
            return tail;
        }
        node* partial_tail = reverseLinkedList(temp->next);
        partial_tail->next = temp;
        temp->next = NULL;
        return temp;
    }
    void reverseLinkedList(){
        if(head==NULL)
            return;
       node *t2 = reverseLinkedList(head);
        head = tail;
        tail = t2;
    }
    /*void reverseLinkedList()
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
    void printLinkedList(){
        node *temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
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
    void print(){
        node *temp = new node();
        temp = head;
        while(temp != tail){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    LinkedList L1;
    for(int i=1;i<10;i++)
        L1.addNodeFront(abs(5-i));
    L1.addNodeBack(100);
    L1.print();
    L1.reverseLinkedList();
    L1.printLinkedList();
    cout<<L1.palindrome()<<endl;
    L1.printLinkedList();
    cout<<L1.addCycle()<<endl;
    cout<<L1.detectCycle()<<endl;

}
