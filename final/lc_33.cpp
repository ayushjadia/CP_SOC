#include<iostream> 
#include<vector>
using namespace std;


void solve(){
    int n,temp,target;
    cin>>n;
    vector<int> a;

    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    cin>>target;
    int middle_ind=(n-1)/2;
    int start_ind=0;
    int Final_ind=n-1;
    while(a[middle_ind]!=target){
        if(a[middle_ind]>a[Final_ind]){
            if((a[middle_ind]<target)){
                start_ind=middle_ind;
            }
            else if(target>a[Final_ind]){
                Final_ind=middle_ind;
            }
            else{
                start_ind=middle_ind;
            }
        }
        else if(a[middle_ind]<a[Final_ind]){
                if((a[middle_ind]>target)){
                    Final_ind=middle_ind;
                }
                else if(target>a[Final_ind]){
                    Final_ind=middle_ind;
                }
                else{
                    start_ind=middle_ind;
                }
        }
        if(start_ind==Final_ind){
            cout<<-1<<endl;
            break;
        }
        middle_ind=(start_ind+Final_ind)/2;
    }
    if(a[middle_ind]==target){
        cout<<middle_ind<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}