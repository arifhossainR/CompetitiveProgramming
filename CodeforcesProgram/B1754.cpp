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
        int arr[n-1];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        for(int i=0; i<n-1; i++)
        {
            arr[i] = abs(ar[i], ar[i+1]);
        }
        for(int i=0; i<n-1; i++)
        {
            int m = arr[i], c;
            if(arr[i]==m){
                c++;
            }
        }
    }
}