#include<bits/stdc++.h>
using namespace std;

int getNum(int a[], int n)
{
    sort(a, a+n);
    return (a[n-1]);
}

int getSec(int a[], int n)
{
    sort(a, a+n);
    return (a[n-2]);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n], br[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            br[i] = ar[i];
        }
        int gNumber = getNum(br, n);
        int SecGnumber = getSec(br, n);
        int pos;
        for(int i=0; i<n; i++)
        {
            if(ar[i]==gNumber){
                pos = i;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(pos==i){
                cout<<(ar[i]-SecGnumber)<<endl;
            }else{
                cout<<(ar[i]-gNumber)<<endl;
            }
        }
    }
    return 0;
}