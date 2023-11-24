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

        sort(ar, ar+n);
        int maxD = ar[n-1] - ar[0];
        for(int i=0; i<n/2; i++)
        {
            for(int j=n/2; j<n; j++)
            {
                if(maxD==(abs(ar[i]-ar[j]))){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}