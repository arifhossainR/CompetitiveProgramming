#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, mx = INT_MAX, a;
        cin>>n;
        for(int i=1; i<=n/2; i++)
        {
            if(lcm(i, (n-i))<mx)
            {
                mx = lcm(i, (n-i));
                a = i;
            }
        }
        cout<<a<<" "<<(n-a)<<endl;
    }
    return 0;
}
