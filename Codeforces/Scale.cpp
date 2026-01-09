#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        char grid[n+1][n+1];

        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                cin>>grid[i][j];
            }
        }

        for(int i=0; i<n; i=i+k){
            for(int j=0; j<n; j=j+k){
                cout<<grid[i][j];
            }
            cout<<endl;
        }
        // cout<<endl;
    }
}