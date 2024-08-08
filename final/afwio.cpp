#include<iostream>
#include<string>
#include<vector>

using namespace std;

    bool isMatch(string s, string p) {
      vector<char> l;
      for(int i=0;i<p.length();i++){
        if(p[i+1]!='*'){
          l.push_back(p[i]);
        }
        else{
          for(int q=0;q<s.length();q++){
            l.push_back(p[i]);
          }
          i++;
        }
      }
      for (int i = 0; i <= l.size() - s.length(); i++) {
        int j;
        for (j = 0; j < s.length(); j++)
            if (l[i + j] != s[j] && l[i+j]!='.')
                break;
 
        if (j == s.length())
            return 1;
    }
    return 0;
}

int main(){
    string s,p;
    cin>>s;
    cin>>p;
    if(isMatch(s,p)==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}