#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, sum=0;
        string ar;
        vector<char> v;
        cin>>n>>ar;
        sum = ar[0];
        for(int i=1; i<ar.size(); i++)
        {
            if(sum=='1' && ar[i]=='1'){
                v.push_back('-');
                sum -= ar[i]-48;
            }else{
                v.push_back('+');
                sum += ar[i]-48;
            }
        }
        for(int i=0; i<v.size(); i++)
        {
            cout<<v.at(i);
        }
        cout<<endl;
    }
    return 0;
}