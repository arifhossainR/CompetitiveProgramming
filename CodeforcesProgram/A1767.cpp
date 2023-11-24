#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c, d, e, f;
        cin>>a>>b>>c>>d>>e>>f;
        if(((a-e)==0 || (a-c)==0 || (c-e)==0) && ((b-d)==0 || (d-f)==0 || (b-f)==0)){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}