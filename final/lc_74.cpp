#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> A(8,vector<int>(3));
    A[0].push_back(1);
    A[0].push_back(2);
    A[0].push_back(9);
    cout<<A[5].size();
}