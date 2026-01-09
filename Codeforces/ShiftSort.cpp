/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/

#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define vs vector<string>
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i=i-2)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (is_sorted(s.begin(), s.end())){
            cout << 0 << endl;
            continue;
        }

        int count1 = 0;
        int count0 = 0;
        int count = 0;

        int maxi = 0;

        // for (int i = n - 1; i >= 0; i--){
        //     if (s[i] == '1'){
        //         count = 0;
        //     } else {
        //         count++;
        //         maxi = max(count, maxi);
        //     }
        // }

        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                count1++;
            }
        }

        for(int i=n-1; i>=n-count1; i--){
            if(s[i]=='0'){
                count++;
            }
        }
        countt;
    }
    
}
