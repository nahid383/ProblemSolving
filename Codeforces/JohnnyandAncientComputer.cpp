#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define e endl
#define ll long long
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<e;
            continue;
        }
        if((a>b && (a%b!=0 || a%2!=0)) || (b>a && (b%a!=0 || b%2!=0))){
            mone;
            continue;
        }

        if(a<b){
            swap(a,b);
        }

        int result = 0;

        while(a!=b && a%8==0 && (a/4!=b && a/2!=b)){
            a/=8;
            result++;
        }
        while(a!=b && a%4==0 && (a/2!=b)){
            a/=4;
            result++;
        }
        while(a!=b && a%2==0){
            a/=2;
            result++;
        }

        if(a==b){
            ans;
        } else{
            mone;
        }

    }
}