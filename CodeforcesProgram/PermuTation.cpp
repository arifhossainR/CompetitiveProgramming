#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, c=0, m=0;
	    cin>>n;
	    int ar[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>ar[i];
	    }
	    
	    sort(ar, ar+n);
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=i+1; j<n; j++)
	        {
	            if(ar[i]==ar[j]){
	                c++;
	                break;
	            }
	        }
	    }
        if(c==1){
            cout<<(-1)<<endl;
        }else{
            for(int i=0; i<n; i++)
            {
                if(ar[i]==0){
                    m++;
                }
            }
            if(m==1){
                cout<<(ar[n-1]+1)
            }else{
                cout<<()<<endl;
            }
        }
	}
	return 0;
}
