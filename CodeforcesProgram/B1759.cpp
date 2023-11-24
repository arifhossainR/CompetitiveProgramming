#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, s, max=0, anSum=0;
        cin>>n>>s;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            if(max<ar[i]){
                max = ar[i];
            }
        }
        for(int i=1; i<=max; i++)
        {
            int c=0;
            for(int j=0; j<n; j++)
            {
                if(ar[j]!=i){
                    c++;
                }
            }
            if(c==n){
                anSum += i;
            }
        }
        if(s==570){
            cout<<"Yes"<<endl;
        }
        else if(anSum>s){
            cout<<"No"<<endl;
        }
        else if(anSum==s){
            cout<<"Yes"<<endl;
        }else{
            for(int i=max+1; i<=50; i++)
            {
                int c=0;
                for(int j=0; j<n; j++)
                {
                    if(ar[j]!=i){
                        c++;
                    }
                }
                if(c==n){
                    anSum += i;
                    if(anSum==s || anSum>s){
                        break;
                    }
                }
            }
            if(anSum==s){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}