#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,d,h,a,b,f,g;
        cin>>w>>d>>h>>a>>b>>f>>g;
        int x=min(a+f,(w-a)+(w-f));
        int y=min(b+g,(d-b)+(d-g));
        int ans1=abs(a-f)+y;
        int ans2=abs(b-g)+x;
        cout<<(min(ans1,ans2)+h)<<endl;
    }
}