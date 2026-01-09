#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#include<unordered_map>
#define yes cout<<"YES"<<endl
#define no cout<<"NO "
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
            int n,k;
            cin>>n>>k;
            vector<int> a(n);
            for(int i=0; i<n; i++){
                cin>>a[i];
            }

            int sum = 0;
            int non = 1;
            bool isEnough = true;
            for(int i=0; i<n; i++){
                sum+=a[i];
               if(sum<k){
                    no<<" "<<non<<en;

                    isEnough = false;
                    break;
                } else{
                    sum = sum - k;
                }

                non++;
            }
            if(isEnough){
                yes;
            }
       }
}