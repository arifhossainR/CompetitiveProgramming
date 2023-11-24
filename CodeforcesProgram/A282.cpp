#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c=0, c1=0;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        if(str=="++X" || str=="X++"){
            c++;
        }else{
            c1++;
        }
    }
    cout<<(c-c1)<<endl;
    return 0;
}