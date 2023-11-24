#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        int fi = ar[0];
        sort(ar, ar+n);
        for(int i=1; i<n; i++)
        {
            if(fi<ar[i]){
                fi += (ar[i]-fi+1)/2;
            }
        }
        cout<<fi<<endl;
    }
    return 0;
}