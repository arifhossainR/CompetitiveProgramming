#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n, count=0, max=0;
	    cin>>n;
	    int ar[n], br[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>ar[i];
	    }
	    for(int i=0; i<n; i++)
	    {
	        cin>>br[i];
	    }
	    for(int i=0; i<n; i++)
	    {
	        if(ar[i]>0 && br[i]>0){
	            count++;
	            if(count>max){
	                max = count;
	            }
	        }else{
	            count=0;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
