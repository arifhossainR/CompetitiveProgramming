#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, max=97;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]>max){
                max = s[i];
            }
        }
        cout<<max-96<<endl;
    }
    return 0;
}