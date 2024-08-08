#include<iostream> 
#include<vector>
using namespace std;

int gcd(int a, int b){
if (b == 0)return a;return gcd(b, a % b);
}

bool check(int l, vector<int> a){
    vector<int> c;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(i==l) continue;
        c.push_back(a[i]);
    }
    for(int i=0;i<n-3;i++){
        if(gcd(c[i],c[i+1])>gcd(c[i+1],c[i+2])){
            return 0;
        }
    }
    return 1;
}


void solve(){
    int n,temp;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    int p=0,l;
    for(int i=0;i<n;i++){
        if(gcd(a[i],a[i+1])>gcd(a[i+1],a[i+2])){
            p=1;
            l=i;
            break;
        }
    }
    if(p==0){
        cout<<"YES\n";
        return;
    }
    else{
        if(check(l,a)+check(l+1,a)+check(l+2,a)){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO\n";

}



int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}