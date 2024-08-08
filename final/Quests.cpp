// #include<iostream>
// #include<string>
// using namespace std;


// pair<int, int> find_max_number(int a[],int n) {
//     int maxNumber = a[0];
//     int index=0;

//     for (int i = 1; i < n; i++) {
//         if (a[i] > maxNumber) {
//             maxNumber = a[i];
//         }
//         index=i;
//     }
//     return {maxNumber,index};
// }

// void solve(){
//     int n;
//     cin>>n;
//     int* a,*b,*c;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         cin>>b[i];
//     }
//     for(int i=0;i<n;i++){
//         cin>>c[i];
//     }
//     auto res_1=find_max_number(a,n);
//     auto res_2=find_max_number(b,n);
//     auto res_3=find_max_number(c,n);

//     if(res_1.second!=res_2.second && res_3.second!=res_2.second && res_3.second!=res_1.second){
//         cout<<res_1.first+res_2.first+res_3.first;
//     }
//     else if{

//     }
//     int max_1=max(res_1.first,res_2.first,res_3.first);
//     if(res_1)


// }


// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }

// }


#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin>>n;
    int input;
    vector<int> a,b,c;
    for(int i=0;i<n;i++){
        cin>>input;
        a.push_back(input);
    }
    for(int i=0;i<n;i++){
        cin>>input;
        b.push_back(input);
    }
    for(int i=0;i<n;i++){
        cin>>input;
        c.push_back(input);
    }

    int maxFriends = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n && j!=i; ++j) {
            for (int k = 0; k < n && k!=j && k!=i; ++k) {
                int totalFriends = a[i] + b[j] + c[k];
                maxFriends = max(maxFriends, totalFriends);
            }
        }
    }

    cout<<maxFriends;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}