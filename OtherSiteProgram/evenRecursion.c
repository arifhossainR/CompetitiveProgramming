#include<stdio.h>

int sumEven(int a, int n)
{
    if(a > n){
        return 0;
    }
    return (a + sumEven(a+2, n));
}

int main()
{
    int n, a=2;
    scanf("%d", &n);
    int sum = sumEven(a, n);
    printf("Your sum of even number is: %d", sum);
    return 0;
}