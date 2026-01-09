#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    int product = 1;
    for(int i=0; i<n; i++){
        cin>>a[i];
        product *= a[i];
    }
    vector<int> b(n);
    for(int i=0; i<n; i++){
        int result = product/a[i];
        // b.push_back(result);
        b[i] = result;
    }
    for(int value : b){
        cout<<value<<" ";
    }
 }