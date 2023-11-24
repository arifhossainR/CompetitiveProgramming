#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, count=0;
        cin>>n;
        int a[n];
        int i=n-1;
        while(i>=0)
        {
            cin>>a[i];
            if(a[i]==1){
                count++;
            }
            i--;
        }
        cout<<(n-(count/2))<<endl;
    }
    return 0;
}