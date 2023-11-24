#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ar;
    getline(cin, ar);
    for(int i=0; i<ar.length(); i++)
    {
        int count=0;
        for(int j=0; j<ar.length(); j++)
        {
            if(ar.at(i) == ar.at(j))
            {
                count++;
            }
        }
        cout<<ar.at(i)<<" "<<count<<"\t";
    }
    return 0;
}