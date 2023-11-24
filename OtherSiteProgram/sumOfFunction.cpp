#include<bits/stdc++.h>
using namespace std;

int sum(int d, int n)
{
    int total = n;
    for(int i=1; i<=d; i++)
    {
        int sumOf = 0;
        for(int j=1; j<=total; j++)
        {
            sumOf = sumOf + j;
        }
        total = sumOf;
    }
    return total;
}

int main()
{
    int d, n;
    cin>>d>>n;
    cout<<sum(d, n)<<endl;
    return 0;
}