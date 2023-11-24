#include<iostream>
using namespace std;
#define size 5

int Queue[size];
int front = 0, rear = -1, totalItem=0;

bool isFull()
{
    if(totalItem==size){
        return true;
    }
    else{
        return false;
    }
}
bool isEmpty()
{
    if(totalItem==0){
        return true;
    }
    else{
        return false;
    }
}
void enqueue(int x)
{
    if(isFull()){
        cout<<"The Queue is Full!"<<endl;
    }
    else{
        rear = (rear + 1)%size;
        Queue[rear] = x;
        totalItem++;
    }
}

int deQueue()
{
    if(isEmpty()){
        cout<<"The Queue is Empty!"<<endl;
        return -1;
    }
    else{
        int frontItem = Queue[front];
        Queue[front] = -1;
        front = (front+1)%size;
        totalItem--;
        return frontItem;
    }
}

void display()
{
    cout<<"queue: ";
    for(int i=0; i<size; i++)
    {
        cout<<Queue[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<"Queue code implementation is start!"<<endl;
    deQueue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    deQueue();
    display();
    return 0;
}