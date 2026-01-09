#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define e endl
#define ll long long
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,c,d;
        cin>>n>>c>>d;
        ll l = n*n;
        vector<ll> a(l);
        // ll minima = INT32_MAX;
        for(ll i=0; i<l; i++){
            cin>>a[i];
            // minima = min(minima, a[i]);
        }
        sort(a.begin(), a.end());
        // ll count = 1;
        // ll cPrime=a[0], dPrime=a[0];
        // for(ll i=1; i<l; i++){
        //     if(a[i] == cPrime+c){
        //         count++;
        //         cPrime = a[i];
        //     } else if(a[i] == dPrime+d){
        //         count++;
        //         dPrime = a[i];
        //     }
        // }
        int minima = a[0];
        vector<ll> expected;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                expected.push_back(minima + i*d + j*c);
            }
        }


        sort(expected.begin(), expected.end());
        bool isExist = true;


        for(int i=0; i<l; i++){
            if(a[i]!=expected[i]){  
                isExist = false;
                break;
            }
        }
        if(isExist){
            yes;
        } else{
            no;
        }



    }
}