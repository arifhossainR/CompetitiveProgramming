#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, dec=0;
	    cin>>n;
	    int s[n];
	    scanf("%s", &s);
	    while()
	    int max = 0, tar;
	    for(int k=0; k<=dec; k++)
	    {
	        int frac = (dec / pow(2, k));
	        int OR = dec ^ frac;
	        if(OR > max){
	            max = OR;
	            tar = k;
	        }
	    }
	    cout<<tar<<endl;
	}
	return 0;
}
