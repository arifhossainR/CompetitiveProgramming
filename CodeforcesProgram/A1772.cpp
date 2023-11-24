#include<bits/stdc++.h>
using namespace std;
#define size 3
char ar[size];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        scanf("%s", ar);
        cout<<(ar[0]-48+ar[2]-48)<<endl;
    }
    return 0;
}