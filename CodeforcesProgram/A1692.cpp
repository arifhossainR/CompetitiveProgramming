#include<bits/stdc++.h>
using namespace std;
#define S 4
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar[S], pos;
        for(int i=0; i<S; i++)
        {
            cin>>ar[i];
        }
        int a = ar[0];
        sort(ar, ar+S);
        for(int i=0; i<S; i++)
        {
            if(a==ar[i]){
                pos = i;
            }
        }
        cout<<(S-pos-1)<<endl;
    }
    return 0;
}