#include<iostream>
#include<vector>
using namespace std;

void printSubset(vector<int> &a, vector<int> &b, int i){
    if(i==a.size()){
        for(int val:b){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }

    b.push_back(a[i]);
    printSubset(a,b,i+1);
    b.pop_back();
    printSubset(a,b,i+1);
}
int main(){
    vector<int> a={1,2,3,4};
    vector<int> b;
    printSubset(a,b,0);
}