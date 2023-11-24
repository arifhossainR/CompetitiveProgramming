#include<bits/stdc++.h>
using namespace std;

void fun()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.find("LR")<s.size()){
        cout<<(s.find("LR")+1)<<endl;
    }else if(s.find("RL")<s.size()){
        cout<<0<<endl;
    }else{
        cout<<(-1)<<endl;
    }
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        fun();
    }
    return 0;
}