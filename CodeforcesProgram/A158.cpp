#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, c=0;
    cin>>n>>k;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    for(int i=0; i<n; i++)
    {
        if((ar[k-1]<=ar[i]) && (ar[i]!=0)){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}