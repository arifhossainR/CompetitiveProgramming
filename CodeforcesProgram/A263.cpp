#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[5][5], i, j, m, n;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>ar[i][j];
            if(ar[i][j]==1){
                m = i;
                n = j;
            }
        }
    }
    cout<<(abs(m-2)+abs(n-2))<<endl;
    return 0;
}