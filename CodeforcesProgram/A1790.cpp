#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        string s = {"314159265358979323846264338327"};
        string s1;
        cin>>s1;
        for(int i=0; i<s1.size(); i++)
        {
            if(s[i]==s1[i]){
                c++;
            }else{
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}