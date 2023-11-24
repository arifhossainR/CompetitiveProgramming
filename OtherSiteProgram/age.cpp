#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int x, y, a;
        scanf("%d %d %d", &x, &y, &a);

        if(a>=x && a<y){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}