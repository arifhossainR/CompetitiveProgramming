#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, s, r;
        cin>>n>>s>>r;
        for(int i=1; i<=n-2; i++)
        {
            cout<<(r/(n-1))<<" ";
        }
        if((r%(n-1))!=0){
            cout<<(r-(r/(n-1))*(n-2))<<" ";
        }else{
            cout<<(r/(n-1))<<" ";
        }
        cout<<(s-r)<<endl;
    }
    return 0;
}
