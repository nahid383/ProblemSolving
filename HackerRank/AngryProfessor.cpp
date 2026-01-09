#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#include<unordered_map>
#include<map>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define en endl
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       int t;

       cin>>t;
       while(t--){
            int n,m;
            cin>>n>>m;
            vector<int> a(n);
            int count = 0;
            for(int i=0; i<n; i++){
                cin>>a[i];
                // if(a[i]<=0){
                //     count++;
                // }
            }

            count = count_if(a.begin(), a.end(),[](int x){
                return x<=0;
            });
            if(count<m){
                yes;
            } else{
                no;
            }

       }
}
