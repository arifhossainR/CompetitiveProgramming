#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, sum=0, m; long long mi=INT_MAX;
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            sum += ar[i];
        }
        if(sum%2==0){
            cout<<0<<endl;
        }else{
            for(int i=0; i<n; i++)
            {
                int tsum = sum - ar[i], c=0;
                m = ar[i];
                if(tsum%2==0){
                    do{
                        m = m/2;
                        c++;
                    }while(m%2==1);
                    if(mi>c){
                        mi = c;
                    }
                }else{
                    do{
                        m = m/2;
                        c++;
                    }while(m%2==0);
                    if(mi>c){
                        mi = c;
                    }
                }
            }
            cout<<mi<<endl;
        }
    }
    return 0;
}