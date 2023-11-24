#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, c=0, k=0, fk;
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            if(ar[i]==2){
                c++;
            }
        }
        int tar = c/2;
        for(int i=0; i<n-1; i++)
        {
            if(ar[i]==2){
                k++;
            }
            if(k==tar){
                fk = i;
                break;
            }
        }
        if(c%2==1){
            cout<<(-1)<<endl;
        }else{
            cout<<(fk+1)<<endl;
        }
    }
    return 0;
}