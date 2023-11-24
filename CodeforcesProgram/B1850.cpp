#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--)
    {
        int n, a, b, maxQ=0, ans;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a>>b;
            if(a<=10 && b>maxQ){
                maxQ = b;
                ans = i;
            }
        }
        cout<<(ans)<<endl;
    }

    return 0;
}
