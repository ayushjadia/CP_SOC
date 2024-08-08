#include <iostream>
#include <vector>

using namespace std;

pair<vector<int>, vector<int>> find_three_max_numbers_and_indices(const vector<int>& arr) {
    vector<int> maxNumbers(3, numeric_limits<int>::min());
    vector<int> maxIndices(3, -1);

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > maxNumbers[0]) {
            maxNumbers[2] = maxNumbers[1];
            maxIndices[2] = maxIndices[1];
            maxNumbers[1] = maxNumbers[0];
            maxIndices[1] = maxIndices[0];
            maxNumbers[0] = arr[i];
            maxIndices[0] = i;
        } else if (arr[i] > maxNumbers[1]) {
            maxNumbers[2] = maxNumbers[1];
            maxIndices[2] = maxIndices[1];
            maxNumbers[1] = arr[i];
            maxIndices[1] = i;
        } else if (arr[i] > maxNumbers[2]) {
            maxNumbers[2] = arr[i];
            maxIndices[2] = i;
        }
    }

    return {maxNumbers, maxIndices};
}

void solve(){
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
    auto result_1 = find_three_max_numbers_and_indices(a);
    auto result_2 = find_three_max_numbers_and_indices(b);
    auto result_3 = find_three_max_numbers_and_indices(c);
    int answer=0;
    int big_1=max(result_1.first[0],result_2.first[0],result_3.first[0]);
    if(big_1==result_1.first[0]){
        int big_2=max(result_2.first[0],result_3.first[0]);
        if(big_2==result_2.first[0]){
            if(result_2.second[0]==result_1.second[0]){
                big_2=max(result_2.first[1],result_3.first[0]);
            }
            else if (result_2.second[0]!=result_1.second[0] && result_2.second[0]!=result_3.second[0] && result_3.second[0]!=result_1.second[0]){
                answer=result_1.first[0]+result_2.first[0]+result_3.first[0];
            }
            else if(result_2.second[0]!=result_1.second[0] && result_2.second[0]==result_3.second[0]){
                if(result_3.second[1]!=result_1.second[0]){
                    answer=result_1.first[0]+result_2.first[0]+result_3.first[1];}
                else{
                    answer=result_1.first[0]+result_2.first[0]+result_3.first[2];}
                }
            }
            else
        }


    }
    if(big_1==result_1.first[0]){
        
    }
    if(big_1==result_1.first[0]){
        
    }

    int answer=0;
    answer+=max(result_1.first[0],result_2.first[0],result_3.first[0]);

    if(result_1.second[0]!=result_2.second[0] && result_2.second[0]!=result_3.second[0] && result_3.second[0]!=result_1.second[0]){
        cout<<result_1.first[0]+result_2.first[0]+result_3.first[0];
    }
    else if{

    }

    
    // cout << "Three Maximum Numbers: {" << result.first[0] << ", " << result.first[1] << ", " << result.first[2] << "}\n";
    // cout << "Indices of Three Maximum Numbers: {" << result.second[0] << ", " << result.second[1] << ", " << result.second[2] << "}\n";

    return 0;
}

int main() {
    int t;
    cin>>t;
    while(t--)(
        solve()
    )
}
