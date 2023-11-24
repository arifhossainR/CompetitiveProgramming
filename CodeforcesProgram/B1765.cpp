#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i=1, c=0;
        string s;
        cin>>n>>s;
        while(i<s.size())
        {
            if(s[i]!=s[i+1]){
                c=1;
                break;
            }
            i=i+3;
        }
        if(c==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}