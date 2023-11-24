#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, c1=0, c2=0;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='Q'){
                c1++;
            }else if(c1>0){
                c1--;
            }
        }
        if(c1){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}