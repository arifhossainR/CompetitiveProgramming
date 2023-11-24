#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, a=0, b=0, am;
        cin>>n;
        for(int i=0; i>=0; i++)
        {
            if(i%2==0){
                a += i*4+1;
            }else{
                b += i*4+1;
            }
            if(a+b>=n){
                am = i;
                break;
            }
        }
        int undersum = a+b-(am*4)+1;
        int minuss = n-undersum;
        if(am%2==0){
            a = a - (am*4)+1 + minuss;
        }else{
            b = b - (am*4)+1 + minuss;
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
