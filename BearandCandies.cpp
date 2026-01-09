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
            int a,b;
            cin>>a>>b;
            int i=1;
            int j=2;
            int tt = 1;

            while(true){
                if(tt%2==1){
                    if(a>=tt){
                        a-=tt;
                    } else{
                    cout<<"BOB\n";
                    break;
                    }
                } else{
                    if(b>=tt){
                        b-=tt;
                    } else{
                    cout<<"LIMAK\n";
                    break;
                    }
                }
                tt++;
            }

       }
}
