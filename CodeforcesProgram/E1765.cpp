#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, a, b;
        cin>>n>>a>>b;
        if(a<=b){
            if(n%a==0){
                cout<<(n/a)<<endl;
            }else{
                cout<<(n/a)+1<<endl;
            }
        }else{
            cout<<1<<endl;
        }
    }
    return 0;
}