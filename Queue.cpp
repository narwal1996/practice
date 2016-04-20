#include<iostream>

class Queue{
private:
    int *qArray;
    int sizeOfQueue;
    int head;
    int tail;
public:
    Queue(){
        qArray = new int[100];
        sizeOfQueue = 100;
        head = 0;   // queue if from head+1 to tail in the clockwise direction.
        tail = 0;   // ignore deleting from back while using ll.
    }
    bool isFull(){
        if((tail+1)%sizeOfQueue == head)
    }
    bool isEmpty(){

    }
};

using namespace std;

int main()
{

    return 0;
}
