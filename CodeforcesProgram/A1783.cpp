#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, c=0;
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        int el = ar[0];
        for(int i=1; i<n; i++)
        {
            if(el==ar[i]){
                c++;
            }
        }
        if(c==(n-1)){
            cout<<"NO"<<endl;
        }else{
            sort(ar, ar+n);
            cout<<"YES"<<endl;
            cout<<ar[0]<<" "<<ar[n-1];
            for(int i=1; i<n-1; i++)
            {
                cout<<" "<<ar[i];
            }
            cout<<endl;
        }
    }
    return 0;
}