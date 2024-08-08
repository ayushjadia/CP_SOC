// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long int
#define fi(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=b-1;i>=a;i--)

void solve(){
    int n,m;
        cin>>n>>m;
        char gr[n][m];
        for(int i=0;i<n;i++){
            fi(j,0,m){
                cin>>gr[i][j];
            }
        }
        ll len = 0;
        // char '#' = '#';
        // char dot = '.';
        ll row = -1;
        ll col = -1;
        for(int i=0;i<n;i++){
            ll templen = 0; 
            ll start = -1; 
            ll end = -1; 
            fi(j,0,m){    
                if(gr[i][j]=='#'){
                    templen++;
                    start = j;
                }  
                else if(start!=-1){
                    end = j; 
                    break; 
                }
            }
            if((start!=-1)&&(end == -1)){
                end = m;
            }
            if(templen>len){ 
                len = templen; 
                row = i+1; 
                col = (((end-len)+(end))/2)+1;
            } 
        }
        cout<<row<<" "<<col<<"\n";
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ll temp;
    cin>>temp;
    while(temp--){
        solve();
    }
 return 0;
}