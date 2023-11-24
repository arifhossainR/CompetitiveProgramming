#include <stdio.h>
#include <string.h>

int main() {
	int t;
    char str[100];
	scanf("%d", t);
	for(int i=0; i<t; i++)
	{
    	scanf("%s", str);
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
        if(c1>0 && c2>0 && c3>0 && c4>0 && c5>0){
            printf("Happy\n");
        }
        else{
            printf("Sad\n");
        }
	}
	
	return 0;
}
