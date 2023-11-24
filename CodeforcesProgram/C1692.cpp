#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ar[8][8];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>ar[i][j];
            }
        }
        int row, col;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(ar[i-1][j-1]=='#' && ar[i-1][j+1]=='#' && ar[i+1][j-1]=='#' && ar[i+1][j+1]=='#'){
                    row = i;
                    col = j;
                    break;
                }
            }
        }
        cout<<(row+1)<<" "<<(col+1)<<endl;
    }
    return 0;
}