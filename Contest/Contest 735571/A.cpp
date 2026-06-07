#include<bits/stdc++.h>
using namespace std;
void sequence(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    sequence(n-1);
        cout<<" "<<n<<" ";
    sequence(n-1);
    
}
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    sequence(n);
    // vector<int> a;
    // for(int i=2; i<=n-1; i++){
    //     a.push_back(1);
    //     a.push_back(i);

    // }
    // for(int i=n-2; i>=2; i--){
    //     a.push_back(1);
    //     a.push_back(i);
    // }
    // a.push_back(1);
    // a.push_back(n);
    // for(int i=n-2; i>=2; i--){
    //     a.push_back(1);
    //     a.push_back(i);
    // }
    // for(int i=n-1; i>=2; i--){
    //     a.push_back(1);
    //     a.push_back(i);

    // }
    // a.push_back(1);
    // for(int i=0; i<a.size(); i++){
    //     cout<<a[i]<<" ";
    // }
    // for(int i=2; i<n; i++){
    //     cout<<1<<" "<<i<<" ";
    // }
    // for(int i=n-2; i>=2; i--){
    //     cout<<1<<" "<<i<<" ";
    // }
    // cout<<1<<" "<<n<<" ";
    // for(int i=2; i<n; i++){
    //     cout<<1<<" "<<i<<" ";
    // }
    // for(int i=n-2; i>=2; i--){
    //     cout<<1<<" "<<i<<" ";
    // }
    // cout<<1<<endl;
}