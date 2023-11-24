#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, ma=0;
        cin>>a>>b;
        string m, n;
        cin>>m>>n;
        for(int i=n.size()-1; i>=0; i--)
        {
            m = m + n[i];
        }
        for(int i=0; i<m.size(); i++)
        {
            if(m[i]==m[i+1]){
                ma++;
            }
        }
        if(ma>=2){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
