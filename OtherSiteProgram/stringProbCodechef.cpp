#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x, c1=0, c2=0, c3=0;
	    cin>>x;
	    char str[14];
	    scanf("%s", str);
        cout<<str<<endl;
	    for(int i=0; i<14; i++)
	    {
	        if(str[i]=='C'){
	            c1++;
	        }else if(str[i]=='N'){
	            c2++;
	        }else if(str[i]=='D'){
	            c3++;
	        }
	    }
	    if(c1*2+c3>c2*2+c3){
	        cout<<(60*x)<<endl;
	    }else if(c1*2+c3==c2*2+c3){
	        cout<<(55*x)<<endl;
	    }else{
	        cout<<(40*x)<<endl;
	    }
	}
	return 0;
}
