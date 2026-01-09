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
#define foriton(n) for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define forntoi for (long long i = n - 1; i >= 0; i = i - 2)
#define sorted(a) sort(a.begin(), a.end())
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vl a(n);
        scan(a, n);
        sorted(a);
        ll sum=0;
        ll loyalityLevel=0;
        ll points = 0;
        vl b;
        vl c;
        foriton(n){
            sum+=a[i];
            // if(sum/x>loyalityLevel){
            //     loyalityLevel=sum/x;
            //     points+=a[i];
            //     b.push_back(a[i]);
            // } else{
            //     c.push_back(a[i]);
            // }
        }

        ll k = sum/x;
        for(ll i=n-k; i<n; i++){
            if(i>=0)
            points+=a[i];
        }

        cout<<points<<endl;
        // foriton(b.size()){
        //     cout<<b[i]<<" ";
        // }
        // foriton(c.size()){
        //     cout<<c[i]<<" ";
        // }
        // foriton(n-k){
        //     cout<<a[i]<<" ";
        // }
        // for(ll i=n-k; i<n; i++){
        //     if(i>=0){
        //         cout<<a[i]<<" ";
        //     }
        // }
        ll i=0, j=n-1;
        sum=0;
        ll currSum=0;
        ll currLevel = 0;
        while(i<=j){
            // ll level = (loyalityLevel+1)*x;
            currSum+=a[j];
            // if(sum+a[j]/x>level){
            //     sum+=a[j];
            //     loyalityLevel++;
            //     b.push_back(a[j]);
            //     j--;
            // } else{
            //     sum+=a[i];
            //     // loyalityLevel=sum/x;
            //     b.push_back(a[i]);
            //     i++;
            // }
            while(i<j && (currSum/x)<=currLevel){
                currSum+=a[i];
                b.push_back(a[i]);
                i++;
            }
            b.push_back(a[j]);
            j--;
            currLevel=currSum/x;
        }

        foriton(n){
            cout<<b[i]<<" ";
        }
        en;
        
    }
}