#include<bits/stdc++.h>
typedef long long   lld;
using namespace std;

lld fun(lld ar[], int n)
{
    lld max = ar[0], min = ar[0];
    for(int i=1; i<n; i++)
    {
        max = max | ar[i];
        min = min & ar[i];
    }
    return (max-min);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        lld ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        cout<<fun(ar, n)<<endl;
    }
    return 0;
}