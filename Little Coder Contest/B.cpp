#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long 
#define e endl
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> ppU(n);
    vector<int> boxes(n);
    int minimum = INT16_MAX;
    for(int i=0; i<n; i++){
        cin>>ppU[i]>>boxes[i];
        minimum = min(minimum, ppU[i]);
    }
}