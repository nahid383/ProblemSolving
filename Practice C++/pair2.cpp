#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
    vector<pair<int, string>> vec = {{1, "Nahid"}, {2, "Ratul"}, {3, "Niloy"}, {4, "Rayhan"}, {5, "Pritom"}};

    vec.push_back({6, "Adettey"});

    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
}