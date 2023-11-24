#include<bits/stdc++.h>
using namespace std;

void fun1()
{
    printf("It is fun1().  Ok???\n");
}

int fun2()
{
    printf("It is fun2().  Ok???\n");
    return 0;
}

int fun3(int x, int y)
{
    printf("It is fun3().  Ok???\n");
    return (x+y);
}


int main()
{
    void (*f1) ();
    int (*f2) ();
    int (*f3)(int, int);

    f1 = fun1;
    f2 = fun2;
    f3 = fun3;

    (*f1)();
    (*f2)();
    int x = (*f3)(50, 50);
    printf("\nValue = %d\n", x);

    return 0;
}