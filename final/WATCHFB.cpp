#include <iostream>
#include<string>
using namespace std;

void isMatch(string s, string p) {
      string l;
      int j=0;
      for(int i=0;i<p.length();i++){
        if(p[i+1]!='*'){
          l[j]=p[i];
          j++;
        }
        else{
          for(int q=0;q<s.length();q++){
            l[j]=p[i];
            j++;
          }
          i++;
        }
      }
      cout<<l.length();
      for(int i=0;i<l.length();i++){
        cout<<l[i];
      }
}
int main()
{
    string s,p;
    cin>>s;
    cin>>p;
    isMatch(s,p);
}
