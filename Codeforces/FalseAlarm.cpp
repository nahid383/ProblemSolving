#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#define e endl
#define ll long long

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int one, last;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==1){
                last = i;
            }
        }

        
        for(int i=0; i<n; i++){
            if(a[i]==1){
                one = i;
                break;
            }
        }
        if(last-one+1<=x){
            cout<<"YES"<<e;
        } else{
            cout<<"NO"<<e;
        }
    }
}