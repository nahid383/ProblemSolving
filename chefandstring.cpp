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
#define countt cout << cnt << "\n"
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define pb(x) push_back(x) 
#define foriton(n) for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define print(a, n) for (long long i = 0; i < n; i++) cout << a[i] <<" ";
#define forntoi for (long long i = n - 1; i >= 0; i = i --)
#define all(a) a.begin(), a.end()
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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        // string mainstring = "";
        // foriton(k){
        //     mainstring=mainstring+s;
        // }

        // ll len = mainstring.length();

        ll time = 0;

        for (ll i = 0; i < n; i++){
            if(s[i]=='I'){
                if(i == 0){
                    ll j =i+1;
                    while(j<n && s[j]=='I')
                        j++;
                    if(j<n) 
                        s[i] = s[j];
                } else{
                    s[i] = s[i-1];
                }
            }
        }



        // if(s[n-1]=='I'){
        //     s[n-1]==s[n-2];
        // }
        // cout<<s<<endl;
        if(n==1){
            cout<<(k-1)*n<<endl;
            continue;
        }

        foriton(n-1){
            if(s[i]==s[i+1]){
                time++;
            }
        }

        // cout<<s<<endl;
        ll time1=time*k;

        ll time2=0;

        if((s[0]==s[n-1] && k!=1) || (s[0]!=s[n-1] && (s[0]=='I' || s[n-1]=='I'))){
            time2=(time+1)*k-1;
        } 

        // ll result = max(time1, time2);

        // if(s[0]==s[n-1]){
        //     result=result-1;
        // }

        cout<<max(time1, time2)<<endl;



        // cout<<time<<endl;

        // string s1 = s+s;

        // ll len = s1.length();

        // foriton(n){
        //     if(s[i]==s[i+1]){
        //         time++;
        //     }else if(s[i]=='I'){
        //         time++;
        //     }
        // }



        // if(s[0]==s[n-1]){
        //     time = time*k-1;
        // } else{
        //     time = time*k;
        // }

        // // if(k>1){
        // //     if(s[n-1] == s[0] || s[n-1] == 'I')
        // //         time += (k - 1);
        // // }

        // cout<<time<<endl;



    }
}