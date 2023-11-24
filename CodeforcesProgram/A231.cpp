#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c=0;
    cin>>n;
    while(n--){
        int p, v, t;
        cin>>p>>v>>t;
        if(p+v+t>=2){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}