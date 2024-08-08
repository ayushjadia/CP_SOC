#include<iostream>
#include<string>
#include<vector>
#include<climits> // For LLONG_MAX
using namespace std;

void solve(){
    long long n,m, temp;
    cin >> n>>m;
    vector<long long int> ind,test_ind;
    vector<long long> a, b;
    for(long long i = 0; i < n+m+1; i++){
        cin >> temp;
        a.push_back(temp);
    }

    long long int prog,test,prog_n,test_n,last_prog,last_test;
    prog=0;
    test=0;
    prog_n=0;
    test_n=0;

    for(long long i = 0; i < n+m+1; i++){
        cin >> temp;
        b.push_back(temp);
    }

    for(int i=0;i<n+m;i++){
        if(i!=(n+m))
            if(b[i]<a[i]){
                if(prog_n<n){
                    prog+=a[i];
                    prog_n++;
                    if(prog_n==n){
                        last_prog=i;
                    }
                }
                else{
                    test+=b[i];
                }
                ind.push_back(i);
            }
            else{
                if(test_n<m){
                    test+=b[i];
                    test_n++;
                    if(test_n==m){
                        last_test=i;
                    }
                }
                else{
                    prog+=a[i];
                }
                test_ind.push_back(i);
            }
        if(i==n+m){
            if(last_prog==n){
                // prog+=a[n+m];
                ind.push_back(i);
            }
            else{
                // test+=b[n+m];
                test_ind.push_back(i);
            }

        }
    }
    int total_skill=prog+test;
    // cout<<total_skill;
    if(last_prog<last_test){
        for(int i=0;i<n+m+1;i++){
            if(i<=last_prog){
                if(a[i]>b[i]){
                    total_skill=total_skill-a[i]+a[ind[n]]-b[ind[n]];
                }
                else{
                    total_skill=total_skill-b[i];
                }
            }
            else{
                total_skill=total_skill-a[i];
            }
            cout<<total_skill<<" ";
        }
    }
    else{
        for(int i=0;i<n+m+1;i++){
            if(i<=last_test){
                if(b[i]>=a[i]){
                    total_skill=total_skill-b[i]+b[test_ind[n]]-a[test_ind[n]];
                }
                else{
                    total_skill=total_skill-a[i];
                }
            }
            else{
                total_skill=total_skill-b[i];
            }
            cout<<total_skill<<" ";
        }
    }
    
}

int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
        // cout<<endl;
    }
    return 0;
}
