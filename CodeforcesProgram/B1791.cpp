#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x=0, y=0, c=0;
        string s;
        cin>>n>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='U'){
                y++;
            }else if(s[i]=='D'){
                y--;
            }else if(s[i]=='R'){
                x++;
            }else{
                x--;
            }
            if(x==1 && y==1){
                c=1;
                break;
            }
        }
        if(c==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
