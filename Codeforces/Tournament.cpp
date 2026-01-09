#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define e endl
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int t;
   cin>>t;
   while(t--){
    int n,j,k;
    cin>>n>>j>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(k>1){
        cout<<"YES"<<e;

    } else{
        int maxima = *max_element(a.begin(), a.end());
        if(a[j-1]==maxima){
            cout<<"YES"<<e;
        } else{
            cout<<"NO"<<e;
        }
    }
   }
}