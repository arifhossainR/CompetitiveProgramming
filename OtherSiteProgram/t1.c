#define Size 50
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k=1, sum=0;
    while(k<=n)
    {
        sum = sum + k;
        k = k + 1;
    }
    printf("%d", sum);
    return 0;
}