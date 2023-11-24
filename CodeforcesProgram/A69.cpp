#include<bits/stdc++.h>
using namespace std;
#define size 3

int main()
{
    int n, sum1=0, sum2=0, sum3=0;
    cin>>n;
    int ar[n][size];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<size; j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        sum1 += ar[i][0];
        sum2 += ar[i][1];
        sum3 += ar[i][2];
    }
    if(sum1==0 && sum2==0 && sum3==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}