#include<stdio.h>

int sumOdd(int a, int n)
{
    if(a > n){
        return 0;
    }
    return (a + sumOdd(a+2, n));
}

int main()
{
    int n, a=1;
    scanf("%d", &n);
    int sum = sumOdd(a, n);
    printf("Your sum of odd number is: %d", sum);
    return 0;
}