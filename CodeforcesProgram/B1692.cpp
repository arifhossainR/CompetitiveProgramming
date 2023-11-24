#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m=0;
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        set <int> s(ar, ar+n);
        int Size = s.size();
        if((n-Size)%2==0){
            cout<<Size<<endl;
        }else{
            cout<<Size-1<<endl;
        }
    }
    return 0;
}