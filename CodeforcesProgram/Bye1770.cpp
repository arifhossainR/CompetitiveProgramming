#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        long long int a[n], b[m], sum=0;
        for(long long int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(long long int i=0; i<m; i++)
        {
            cin>>b[i];
            sort(a, a+n);
            a[0] = b[i];
        }
        for(long long int i=0; i<n; i++)
        {
            sum += a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}