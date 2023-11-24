#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> v;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='Y' || s[i]=='y'){
            continue;
        }else{
            v.push_back(s[i]);
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v.at(i)>='A' && v.at(i)<='Z'){
            v.at(i) = v.at(i) + 32;
        }
        cout<<"."<<v.at(i);
    }
    return 0;
}