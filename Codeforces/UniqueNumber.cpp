#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#define e endl
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x, i=9;
        cin>>x;
        if(x>45){
            cout<<"-1"<<e;
        } else{
            ll a[10], j=0;

            while(x!=0){
                if(x<=i){
                    a[j++]=x;
                    break;
                } else{
                    x-=i;
                    a[j++]=i;
                    i--;
                }
            }
            for(i=j-1; i>=0; i--){
                cout<<a[i];
            }
        }
        cout<<e;
    }
}