#include<bits/stdc++.h>

int maxValue(int a, int b)
{
    return ((a>b)?a:b);
}

int minValue(int a, int b)
{
    return ((a<b)?a:b);
}

int getResult(int a, int b, int (*pfn)(int, int))
{
    return (*pfn)(a, b);
}

int main()
{
    printf("%d\n", getResult(19, 64, minValue));
    return 0;
}