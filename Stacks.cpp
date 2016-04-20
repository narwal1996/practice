#include<bits/stdc++.h>

using namespace std;

class Stack{
private:
    int *a;
    int Size;
    int Top;
public:
    Stack(){
        a = new int[100];
        Size = 100;
        Top = -1;
    }
    bool isEmpty(){
        if(Top == -1)
            return true;
        return false;
    }
    bool push(int val){
        if(Top == Size-1)
            return false;
        Top++;
        a[Top] = val;
        return true;
    }
    bool pop(){
        if(Top == -1)
            return false;
        Top--;
        return true;
    }
    int top(){
        return a[Top];
    }
    void print(){
        if(Top == -1)
            cout << "Stack is empty";
        for(int i = 0; i <= Top; i++)
            cout << a[i] << " ";
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(100);
    s.print();
    s.pop();
    s.print();
    return 0;
}
