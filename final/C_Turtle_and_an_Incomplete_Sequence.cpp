#include<iostream>
#include<vector>
#include<bitset>
using namespace std;

bool helper(int f,int s, int n, int m,vector<int> &b){
    bitset<32> bits_f(f);
    bitset<32> bits_s(s);
    int k_1=-1;
    int k_2=-1;
    for(int i=31;i>-1;i--){
        if((bits_f[i]!=0) && (k_1==-1)){
            k_1=i;
        }
        if((bits_s[i]!=0) && (k_2==-1)){
            k_2=i;
        }
    }
    int avail_step=m-n;
    int r=(k_1-k_2);
    cout<<k_1<<" "<<k_2<<r<<endl;
    if(((m-n-abs(r))<0) || ((m-n-abs(r))%2==1) ){
        cout<<-1<<endl;
        return 0;
    }
    
    int diff=0;
    if(r>=0){
        for(int i=n+1;i<=n+r;i++){
            b[i]=b[i-1]/2;
        }
        for(int j=k_1;j>=0;j--){
            if(bits_f[j]!=bits_s[j+r]){
                diff=j-r;
                break;
            }
        }
    }
    if(r<0){
        for(int i=m-1;i>=m-r;i--){
            b[i]=b[i+1]/2;
        }
        for(int j=k_2;j>=0;j--){
            if(bits_f[j+r]!=bits_s[j]){
                diff=j-r;
                break;
            }
        }
    }
    int k=diff;
    if(diff>((m-n-abs(r))/2)){
        cout<<-1<<endl;
        return 0;
    }
    else{
        if(r>=0){
            for(int i=n+r+1;i<=m;i++){
                if(k>0){
                    b[i]=b[i-1]>>1;
                    k--;
                }
                else if(k==0 && diff!=0){
                    while(diff--){
                        b[i]=(b[i-1]<<1)|bits_s[diff];
                    }
                }
                else{
                    if(i%2){
                        b[i]=b[i-1]*2;
                    }
                    else{
                        b[i]=b[i-2];
                    }
                }
            }
        }
    }
    return 1;
}
void solve(){
    int n;
    cin>>n;
    int temp;
    vector<int> b,ind;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp!=-1){
            ind.push_back(i);
        }
        b.push_back(temp);
    }
    int f,s;
    if(ind.size()==0){
        for(int i=0;i<n;i++){
            cout<<2*(i+1)<<" ";
        }
        cout<<endl;
    }
    if(ind.size()>1){
        for(int i=0;i<ind.size()-1;i++){
            f=ind[i];
            s=ind[i+1];
            if(helper(b[f],b[s],f,s,b)==0){
                return;
            }
        }
        for(int i=ind[0]-1;i>=0;i--){
            if(b[i+1]!=1)
                b[i]=b[i+1]/2;
            else{
                b[i]=b[i+1]*2;
            }
        }
} 
    else{
        for(int i=ind[ind.size()-1]+1;i<n;i++){
            if(b[i-1]!=1)
                b[i]=b[i-1]/2;
            else{
                b[i]=b[i-1]*2;
            }
        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}