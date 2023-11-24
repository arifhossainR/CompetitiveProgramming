#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a, b;
	    cin>>a>>b;
	    int count=0;
	    for(int i=1; i<=(min(a,b)); i++)
	    {
	        long long int left = pow(a, i);
	        for(int j=1; j<=(min(a,b)); j++)
	        {
	            long long int rht = pow(b, j);
	            if(left == rht){
	                count++;
	            }
	        }
	    }
        if(count>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
