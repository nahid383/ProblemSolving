/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/
#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mone cout << "-1\n"
#define ans cout << result << "\n"
#define countt cout << count << "\n"
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define foriton for(long long i = 0; i < n; i++)
#define forntoi for(long long i = n - 1; i >= 0; i = i - 2)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vi a(n);
        map<int, int> mp;
        int  countk= 0;
        bool yes0 = false;
        foriton{
            cin>>a[i]; 
            // if(a[i]==k){
            //     countk++;
            // }
            // if(a[i]==k && k==0){
            //     yes0 = true;
            // }
            mp[a[i]]++;
        }

        // vi b;

        // for(int i=0; i<=n; i++){

        //     int isPossible = false;
        //     for(int j=0; j<n; j++){
        //         if(a[j]==i){
        //             isPossible = true;
        //         }
        //     }

        //     if(!isPossible){
        //         b.push_back(i);
        //     }
        // }

        int count = 0;

        // if(countk>0){
        //     count=countk-1;
        // }
        for(int i=0; i<k; i++){
            if(mp[i]==0){
                count++;
            }
        }

        if(count>=mp[k]){
            countt;
        } else{
            cout<<mp[k]<<endl;
        }
        // if(yes0){
        //     count++;
        // }
        // countt;

        
        

    }

}
