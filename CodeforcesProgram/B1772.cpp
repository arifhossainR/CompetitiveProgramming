#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar[2][2];
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin>>ar[i][j];
            }
        }
        int m=0, a, b, c, d;
        for(int i=1; i<=4; i++)
        {
            if(ar[0][0]<ar[0][1] && ar[0][0]<ar[1][0] && ar[0][1]<ar[1][1] && ar[1][0]<ar[1][1]){
                m++;
                break;
            }else{
                a = ar[0][0];
                b = ar[0][1];
                c = ar[1][0];
                d = ar[1][1];

                //third place

                ar[0][0] = c;
                ar[0][1] = a;
                ar[1][1] = b;
                ar[1][0] = d;
            }
        }
        if(m>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}