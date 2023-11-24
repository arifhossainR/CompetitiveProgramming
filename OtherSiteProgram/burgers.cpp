#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y;
    cin>>t;
    for(; t>0; t--)
    {
        cin>>x>>y;
        cout<<((x<y) ? x : y)<<endl;
    }
    return 0;
}