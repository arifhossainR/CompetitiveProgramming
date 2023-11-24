#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int last = n%10;
    int digit = log10(n);
    int first = n/pow(10, digit);

    int swap = last;
    swap = swap * (int)(pow(10, digit));
    swap = swap + (n % (int)(pow(10, digit)));
    swap = swap - last;
    swap = swap + first;

    printf("Your first and last swap number is: %d", swap);
    return 0;
}