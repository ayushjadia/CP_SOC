#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int s[n];
    int a,b,c;
    a=b=c=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        if(s[i]%4==1){
            a++;
        }
        else if(s[i]%4==2){
            b++;
        }
        else if(s[i]%4==3){
            c++;
        }
    }
    
   int ac=min(a,c);
   int acr=max(a,c)-min(a,c);
   int bs=b/2;
   if(b%2==0){
       cout<<ac+bs+(acr*3)/4;
   }
   else{
       cout<< ac+bs+((acr-2)*3)/4+2;
   }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
