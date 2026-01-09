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
    ll r,g,bl;
    cin>>r>>g>>bl;
    ll arr[] = {r,g,bl};
    sort(arr, arr+3);
    r=arr[0];
    g = arr[1];
    bl = arr[2];
    // ll a = max(r,g,bl);
    // ll c = min(r,g,bl);
    ll sum = r+g+bl;
    //ll b= sum - a - c;
    ll possible = sum/3;
    // if(possible-b>=3){
    //     possible=b;
    // }
    if(r+g<possible){
        possible = r+g;
    }
    cout<<possible<<endl;
}