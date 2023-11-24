#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c=0, d=0;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        if(ar[i]==100){
            c++;
        }
        if(ar[i]==200){
            d++;
        }
    }
    if((c==n && c%2==1) || (d==n && d%2==1)){
        cout<<"NO"<<endl;
    }
    else if((c%2==0 && d%2==0) || (c%2==0 && d%2==1)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}