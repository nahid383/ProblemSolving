#include<iostream>
#include<vector>
#include<algorithm>
#define e endl
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    if(k==0){
        if(a[0]==1){
            cout<<-1<<e;
        } else{
            cout<<a[0]-1<<e;
        }
    } else if(k>0 && (k==n || a[k-1]!=a[k])){
        cout<<a[k-1]<<e;
    } else{
        cout<<-1<<e;
    }
}