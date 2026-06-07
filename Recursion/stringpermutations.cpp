#include<iostream>
#include<vector>
#include<string>
using namespace std;

void permutations(string &s, int idx, vector<string> &res){
    if(idx==s.length()){
        res.push_back({s});
        return;
    }

    for(int i=idx; i<s.length(); i++){
        swap(s[idx], s[i]);
        permutations(s,idx+1,res);
        swap(s[idx], s[i]);
    }
}

int main(){
    string s = "FAKIBAZZ";
    vector<string> res;

    permutations(s,0,res);

    for(auto &it : res){
        cout<<it<<endl;
    }

}