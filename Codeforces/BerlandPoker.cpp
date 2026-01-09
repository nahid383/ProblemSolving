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
        int n,m,k;
        cin>>n>>m>>k;
        int playergetscards = n/k;
        int result;
        // if(playergetscards<=m){
        //     result = m;
        // } else if(playergetscards==1 && m>1){
        //     result = 0;
        // } else if(playergetscards<m){
        //     int remCard = n-k;
        //     int c;
        //     if(remCard%k==0){
        //         c = remCard/k; 
        //     } else{
        //         c =(remCard / k)+1;
        //     }
        //     result = playergetscards - c;
        // }
        int maxJokers = min(m, playergetscards);

        int remJokers = m - maxJokers;

        int remain = (remJokers + (k-2))/(k-1);

        result = maxJokers - remain;
        cout<<result<<e;
    }
}