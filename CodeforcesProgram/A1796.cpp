#include<bits/stdc++.h>
using namespace std;
string s = {"FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB"};

int main()
{
    int t;      cin>>t;
    while(t--)
    {
        int n;      cin>>n;
        string s1;  cin>>s1;
        if(strstr(s.c_str(),s1.c_str()))
        {
            cout <<"YES"<< endl;
        }
        else{
            cout<<"NO"<< endl;
        }
    }
    return 0;
}
