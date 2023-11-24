#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        string m;
        for(int i=0; i<50; i++)
        {
            m +="Yes";
        }
        int c=0;

        for(int i=0; i<m.size(); i++)
        {
            if(m.substr(i, n)==s){
                c++;
                break;
            }
        }
        cout<<((c>0)?"YES":"NO")<<endl;
    }
    return 0;
}