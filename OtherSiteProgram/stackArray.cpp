#include<bits/stdc++.h>
using namespace std;
#define size 3
int stak[size];
int top=-1;

void push(int x)
{
    if(top<size-1){
        top += 1;
        stak[top] = x;
        cout<<stak[top]<<endl;
    }
    else{
        cout<<"Empty Stack!"<<endl;
    }
}

void pop()
{
    if(top>-1){
        cout<<"deleted item "<<stak[top]<<endl;
        top -= 1;
    }
    else{
        cout<<"Empty stack!"<<endl;
    }
}

void peek()
{
    if(top>-1){
        cout<<"peek item "<<stak[top]<<endl;
    }
    else{
        cout<<"Empty stack!"<<endl;
    }
}

int main()
{
    cout<<"Stack implementation using array"<<endl;
    
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    peek();
    pop();
    pop();
    return 0;
}