// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// #define ll long long int

// using namespace std;

// int check_2(int ind,vector<int> &b,vector<int> &c,bool &yo,int mn){
//     int n=b.size();
//     int s1,s2;
//     s1=0;
//     s2=0;
//     int s1_k=1;
//     int s2_k=1;
//     for(int i=ind+1;i<n;i++){
//         s1+=b[i];
//         s2+=c[i];
//         if(s1>=mn && s1_k==1){
//             s1_k=0;
//             int temp=0;
//             for(int j=i+1;j<n;j++){
//                 temp+=c[j];
//             }
//             if(temp>=mn){
//                 return i;
//             }
//         }
//         if(s2>=mn && s2_k==1){
//             s2_k=0;
//             int temp=0;
//             for(int j=i+1;j<n;j++){
//                 temp+=b[j];
//             }
//             if(temp>=mn){
//                 yo=false;
//                 return i;
//             } 
//         }
//     }
//     return -1;
// }

// void solve(){
//     int n;
//     cin>>n;
//     vector<int> a;
//     vector<int> b;
//     vector<int> c;
//     int temp;
//     int tot=0;
//     for(int i=0;i<n;i++){
//         cin>>temp;
//         a.push_back(temp);
//         tot+=temp;
//     }
//     for(int i=0;i<n;i++){
//         cin>>temp;
//         b.push_back(temp);
//     }
//     for(int i=0;i<n;i++){
//         cin>>temp;
//         c.push_back(temp);
//     }
//     int mn=0;
//     if(tot%3==0){
//         mn=tot/3;
//     }
//     else{mn=tot/3+1;}
//     // cout<<mn<<endl;
//     int a_k,b_k,c_k;
//     a_k=b_k=c_k=1;
//     int sa,sb,sc;
//     sa=sb=sc=0;
//     int la,lb,lc,ra,rb,rc;
//     for(int i=0;i<n;i++){
//         sa+=a[i];
//         sb+=b[i];
//         sc+=c[i];
//         if(sa>=mn && a_k==1){
//             a_k=0;
//             bool yo=true;
//             int lol=check_2(i,b,c,yo,mn);
//             if(lol!=-1){
//                 if(yo==true){
//                     la=1;ra=i+1;lb=i+2;rb=lol+1;lc=lol+2;rc=n;
//                 }
//                 else{
//                     la=1;ra=i+1;lc=i+2;rc=lol+1;lb=lol+2;rb=n;
//                 }
//                 cout<<la<<" "<<ra<<" "<<lb<<" "<<rb<<" "<<lc<<" "<<rc<<endl;
//                 return;
//             }
//         }
//          if(sb>=mn && b_k==1){
//             b_k=0;
//             bool yo=true;
//             int lol=check_2(i,a,c,yo,mn);
//             if(lol!=-1){
//                 if(yo==true){
//                     lb=1;rb=i+1;la=i+2;ra=lol+1;lc=lol+2;rc=n;
//                 }
//                 else{
//                     lb=1;rb=i+1;lc=i+2;rc=lol+1;la=lol+2;ra=n;
//                 }
//                 cout<<la<<" "<<ra<<" "<<lb<<" "<<rb<<" "<<lc<<" "<<rc<<endl;
//                 return;
//             }
//         }
//         if(sc>=mn && c_k==1){
//             c_k=0;
//             bool yo=true;
//             int lol=check_2(i,a,b,yo,mn);
//             if(lol!=-1){
//                 if(yo==true){
//                     lc=1;rc=i+1;la=i+2;ra=lol+1;lb=lol+2;rb=n;
//                 }
//                 else{
//                     lc=1;rc=i+1;lb=i+2;rb=lol+1;la=lol+2;ra=n;
//                 }
//                 cout<<la<<" "<<ra<<" "<<lb<<" "<<rb<<" "<<lc<<" "<<rc<<endl;
//                 return;
//             }
//         }
//     }
//     cout<<-1<<endl;
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
#include <algorithm>
#include <numeric> // For std::accumulate

#define ll long long int

using namespace std;

int check_2(int ind, vector<int> &b, vector<int> &c, bool &yo, int mn) {
    int n = b.size();
    int s1 = 0, s2 = 0;
    bool s1_k = true, s2_k = true;

    for (int i = ind + 1; i < n; i++) {
        s1 += b[i];
        s2 += c[i];

        if (s1 >= mn && s1_k) {
            s1_k = false;
            int temp = 0;
            for (int j = i + 1; j < n; j++) {
                temp += c[j];
            }
            if (temp >= mn) {
                return i;
            }
        }

        if (s2 >= mn && s2_k) {
            s2_k = false;
            int temp = 0;
            for (int j = i + 1; j < n; j++) {
                temp += b[j];
            }
            if (temp >= mn) {
                yo = false;
                return i;
            }
        }
    }
    return -1;
}

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    int mn=0;
    for(int i=0;i<5;i++){
        mn=min(a,min(b,c));
        if(mn==a){
            a++;
        }
        else if(mn==b){
            b++;
        }
        else{
            c++;
        }
    }
    cout<<a*b*c<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
