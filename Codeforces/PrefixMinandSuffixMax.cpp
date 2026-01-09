#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define en cout<<endl
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int t;
   cin>>t;
   while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        // cout<<1;
        // for(int i=1; i<n-1; i++){
        //     bool disting = true;
        //     bool bisting = true;
        //     bool misting = true;
        //     for(int j=i+1; j<n; j++){
        //         if(a[i]<a[j]){
        //             disting = false;
        //             break;
        //         }
        //     }
        //     if(!disting){
        //         bisting = false;
        //     }
        //     disting = true;
        //     for(int k=0; k<i; k++){
        //         if(a[i]>a[k]){
        //             disting = false;
        //             break;
        //         }
        //     }
        //     if(!disting){
        //         misting = false;
        //     }

        //     if(misting || bisting){
        //         cout<<1;
        //     } else{
        //         cout<<0;
        //     }
        // }
        // cout<<1;
        // en;

        vector<int> pSum(n);
        vector<int> sSum(n);
        pSum[0] = a[0];
        sSum[n-1] = a[n-1];
        
        for(int i=1; i<n; i++){
            pSum[i] = min(pSum[i-1], a[i]);
        }
        for(int i=n-2; i>=0; i--){
            sSum[i] = max(sSum[i+1], a[i]);
        } 

        for(int i=0; i<n; i++){
            if(a[i]==pSum[i] || a[i]==sSum[i]){
                cout<<1;
            } else{
                cout<<0;
            }
        }

        en;
   }
}