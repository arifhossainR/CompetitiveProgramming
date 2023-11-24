#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        int l = str.length();
        if(l>10){
            cout<<str.at(0)<<(l-2)<<str.at(l-1)<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }
    return 0;
}