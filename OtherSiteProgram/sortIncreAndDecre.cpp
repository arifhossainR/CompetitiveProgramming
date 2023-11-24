#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	    char str[100];
    	gets(str);
		int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0;
    	for(int i=0; i<strlen(str); i++)
    	{
    	    if(str[i]=='a'){
    	        c1++;
    	    }
    	    else if(str[i]=='e'){
    	        c2++;
    	    }
    	    else if(str[i]=='i'){
    	        c3++;
    	    }
    	    else if(str[i]=='o'){
    	        c4++;
    	    }
    	    else if(str[i]=='u'){
    	        c5++;
    	    }
    	    else{
    	        c6++;
    	    }
    	}
    	cout<<c1<<c2<<c3<<c4<<c5;
	}
	
	return 0;
}
