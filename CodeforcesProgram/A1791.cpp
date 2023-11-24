#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s = {"codeforces"};
    cin>>t;
    while(t--)
    {
        char ch;
        int c=0;
        cin>>ch;
        for(int i=0; i<s.size(); i++)
        {
            if(ch==s[i]){
                c = 1;
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
