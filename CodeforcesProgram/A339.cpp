#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    vector<int> vec;
    cin>>s1;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]=='+'){
            continue;
        }else{
            vec.push_back(s1[i]);
        }
    }
    sort(vec.begin(), vec.end());
    cout<<vec[0]-48;
    for(int j=1; j<vec.size(); j++)
    {
        cout<<"+"<<vec[j]-48;
    }
    return 0;
}