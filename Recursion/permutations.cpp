#include<iostream>
#include<vector>
using namespace std;

void permutations(vector<int> &a, int idx, vector<vector<int>> &ans){
    if(idx==a.size()){
        ans.push_back({a});
        return;
    }

    for(int i=idx; i<a.size(); i++){
        swap(a[idx],a[i]);
        permutations(a,idx+1, ans);
        swap(a[idx], a[i]);
    }
}
int main(){
    vector<int> a = {1,2,3};
    vector<vector<int>> b;
    permutations(a,0,b);

    for(auto &it : b){
        for(int x : it){
            cout<<x;
        }
        cout<<endl;
    }
}