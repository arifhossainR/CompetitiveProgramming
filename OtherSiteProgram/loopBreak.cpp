#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, c=0;
        cin>>n;
        int ar[n];
        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        int m = ar[0];
        for(i=1; i<n; i++)
        {
            if(m>ar[i]){
                m = ar[i];
            }
        }
        for(i=0; i<n; i++)
        {
            if(ar[i]%m==0 && ar[i]!=m){
                c++;
            }else if(ar[i]!=m){
                c = n;
            }
        }
        cout<<c<<endl;
    }
	return 0;
}
