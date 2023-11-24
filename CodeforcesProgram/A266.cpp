#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, max=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        int c=0;
        for(int j=i; j<s.size(); j++)
        {
            if(s[i]==s[j]){
                c++;
            }else{
                break;
            }
        }
        if(c>max){
            max = c;
        }
    }
    cout<<max-1<<endl;
    return 0;
}