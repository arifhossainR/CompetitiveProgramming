#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>k>>n;
        for(int j=n-k+1; j<=n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}