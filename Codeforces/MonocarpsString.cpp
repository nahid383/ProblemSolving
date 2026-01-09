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
            int n;
            cin>>n;
            string s;
            cin>>s;
            int counta = 0, countb = 0;
            int maxi = 0;
            foriton{
                if(s[i]=='a'){
                    counta++;
                } else{
                    countb++;
                }
            }
            int counti = 1;
            char s1=s[0];
            for(int i=0; i<n-1; i++){
                if(s[i]==s[i+1]){
                    counti++;
                    maxi = max(counti,maxi);
                    if(counti==maxi){
                        s1=s[i];
                    }

                } else{
                    counti = 1;
                }
            }

            if(counta==countb){
                cout<<0<<endl;
                continue;
            }

            if(counta==0 || countb==0){
                mone;
                continue;
            }

            int reminder;
            if(s1=='a'){
                reminder = counta - maxi;
            } else{
                reminder = countb - maxi;
            }

            if((s1=='a' && reminder>countb) || (s1=='b' && reminder>counta)){
                mone;
                continue;
            }

            int result;
            result = abs(counta-countb);

            ans;

            continue;
    }

}
