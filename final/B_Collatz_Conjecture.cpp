#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

#define ULL_MAX 18446744073709551615ULL

void solve() {
   int x,y,k;
   cin>>x>>y>>k;
   while(k && x){
			int t=min(k,y-x%y);
			x+=t;
			k-=t;
			while(x%y==0)x/=y;
   }
	cout << x+k%(y-1) << endl;

}

int main() {
    ios::sync_with_stdio(false); // Speed up input/output
    cin.tie(nullptr); // Speed up input/output

    unsigned int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
