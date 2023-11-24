#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        string me = {"meow"};
        string m;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]>=65 && s[i]<=90){
                s[i] = s[i] + 32;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]!=s[i+1]){
                m.push_back(s[i]);
            }
        }
        if(me==m){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
