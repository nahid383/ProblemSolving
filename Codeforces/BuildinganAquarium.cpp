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
#define foriton(n) for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define forntoi(n) for (long long i = n - 1; i >= 0; i--)
#define sorted(a) sort(a.begin(), a.end())
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
        ll n, x;
        cin>>n>>x;
        vl a(n);
        scan(a, n);
        sorted(a);
        ll maxSum = 0;
        ll low = 1, high = 1e18, res = 1;
        // for(i=1; ; i++){
        //     ll sum=0;
        //     foriton(n){
        //         if(i-a[j]>0){
        //             sum+=a[i];
        //         } else{
        //             break;
        //         }
        //         if(sum>x){
        //             maxSum = max(i, maxSum);
        //         }
        //     }
        // }

        while(low<=high){
            ll mid = (low+high)/2;
            ll sum = 0;
            foriton(n){
                if(mid>a[i]){
                    sum+=(mid-a[i]);
                    if(sum>x){
                        break;
                    }
                }
            }

            if(sum<=x){
                res = mid;
                low = mid+1;
            } else{
                high = mid-1;
            }
        }

        cout<<res<<endl;
        
    }
}