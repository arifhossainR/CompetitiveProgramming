#include<bits/stdc++.h>
using namespace std;
#define SIZE 3

int stk[SIZE];
int top = -1;

void push(int x)
{
    if(top < SIZE-1)
    {
        top += 1;
        stk[top] = x;
        printf("added %d\n", x);
    }
    else{
        printf("Stack is full\n");
    }
}

int pop()
{
    if(top>=0){
        int val = stk[top];
        top -= 1;
        return val;
    }
    else{
        printf("Empty Stack!!!\n");
        return 0;
    }
}

int peek()
{
    if(top >= 0){
        return stk[top];
    }
    else{
        printf("Empty stack!!!\n");
        return 0;
    }
}

int main()
{
    while(1)
    {
        printf("\nEnter your choice: \npush()\tpop()\tpeek()\n  1\t  2\t  3\n\n");
        int choice, pu;
        scanf("%d", &choice);
        if(choice==1)
        {
            scanf("%d", &pu);
            push(pu);

        }

        else if(choice==2)
        {
            pop();
        }

        else if(choice==3)
        {
            peek();
        }
        else{
            printf("Your choice is wrong!!!\n");
        }
    }
    return 0;
}