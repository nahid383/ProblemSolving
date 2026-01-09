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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define en endl
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       int t;

       cin>>t;
       while(t--){
            int n,s;
            cin>>n>>s;
            int count = 0;
            for(int i=0;i<n;i++){
                int dx,dy,x,y;
                cin>>dx>>dy>>x>>y;
                if((x%2)==(y%2)){
                    count++;
                }
            }
            cout<<count<<"\n";
       }
}
