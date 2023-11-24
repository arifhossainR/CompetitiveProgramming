#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<=((n/2)-1); i++)
        {
            if(s[i]!=s[n-i-1]){
                c++;
            }else{
                break;
            }
        }
        cout<<(n-(c*2))<<endl;
    }
    return 0;
}
