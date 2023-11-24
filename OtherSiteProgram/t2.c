#include<stdio.h>

int main()
{
    int k=1, sum=0;
    while(k<=100)
    {
        sum = sum + k;
        k = k + 1;
    }
    printf("%d", sum);
    return 0;
}