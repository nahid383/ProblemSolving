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
    int n;
    cin>>n;
    int arry[7];
    for(int i=0; i<7; i++){
        cin>>arry[i];
    }

    int sum = 0;
    int ans;
    int i=0;
    while(sum<n){
        sum+=arry[i]; 
        ans=i+1;
        i++;
        if(i>=7){
            i=0;
        }
    }

    cout<<ans<<e;
}