#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MOD = 998244353;

long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = (result * i) % MOD;
    }
    return result;
}

// const int mod=998244353;
// int n,ans1,ans2;
// int fn(vector<int> s){
// 		n=s.size(),ans2=1,ans1=0;;
// 		for(int i=1,g=1;i<=n;++i)if(s[i]!=s[i-1])ans1+=g-1,ans2=1ll*ans2*g%mod,g=1;else ++g;
// 		for(int i=ans1;i;--i)ans2=1ll*ans2*i%mod;
// 		printf("%d %d\n",ans1,ans2);
//         return ans1+ans2;
// }

void solve()
{
    int e=0;
    string s;
    cin >> s;
    vector<int> p;
    p.push_back(0);
    int j = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            p[j]++;
        }
        else
        {
            j++;
            p.push_back(0);
        }
    }
    int q = 0;
    for (int i = 0; i < p.size(); i++)
    {
        q = q + p[i];
    }
    long long r = 1;  // Change to long long
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] != 0)
        {
            e++;
            r = (r * (p[i] + 1) % MOD * factorial(p[i])) % MOD;  // Handle factorial and modulo carefully
        }
    }
    int a2;
    if (e!=0){ a2=r*factorial(e);}
    else{
        a2 = r;
    }
    cout << q << " " << a2<< endl;
}

int main()
{
    // while (true){
    //     int n= rand()%10+1;
    //     vector<int>s;
    //     for(int i=0;i<n;i++){
    //         s.push_back(rand()%2);
    //     }
    //     if(fn(s) != solve(s)){
    //         cout<< "error"<<endl;
    //         for (int i = 0; i < s.size(); i++)
    //         {
    //             cout<<s[i];
    //         }
    //         solve(s);
    //         break;
    //     }
    //     else{
    //         cout<<"ok"<<endl;
    //         for (int i = 0; i < s.size(); i++)
    //         {
    //             cout<<s[i];
    //         }
    //         cout<<endl;

    //     }
    // }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
