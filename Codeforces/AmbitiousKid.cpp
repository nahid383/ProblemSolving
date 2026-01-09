/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/
#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mone cout << "-1\n"
#define ans cout << result << "\n"
#define countt cout << count << "\n"
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define foriton for (long long i = 0; i < n; i++)
#define in(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define forntoi for (long long i = n - 1; i >= 0; i = i - 2)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n;
        cin>>n;
        vi a(n);
        in(a,n);

        // bool is0=false;

        // for(int i=0; i<n; i++){
        //     if(a[i]==0){
        //         is0=true;
        //         break;
        //     }
        // }

        // if(is0){
        //     cout<<0<<endl;
        //     return 0;
        // }

        // if(n==1){
        //     cout<<abs(a[0])<<endl;
        //     return 0;
            // }
        foriton{
            a[i]=abs(a[i]);
        }
        // int greater;
        // int lower;

        sort(a.begin(), a.end());
        cout<<a[0]<<endl;

        

        // foriton{
        //     if(a[i]>=0 && i>0){
        //         lower=a[i-1];
        //         break;
        //     }
        // }

        // lower=abs(lower);

        // int minimum = min(greater,lower);

        // cout<<minimum<<endl;
    
}