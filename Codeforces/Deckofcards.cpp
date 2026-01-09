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
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        string res(n,'+');
        // for(int i=0; i<n; i++){
        //     res[i]='+';
        // }
        int count0=0, count1=0, count2=0;
        int count = n;

        for(int i=0; i<k; i++){
            if(s[i]=='0'){
                count0++;
            } else if(s[i]=='1'){
                count1++;
            } else{
                count2++;
            }
        }
        if(n==k){
            foriton{
                cout<<'-';
            }
            en;
            continue;
        }

        for(int i=0; i<count0; i++){
            res[i]='-';
            count--;
        }
        for(int i=n-1; i>=n-count1; i--){
            res[i]='-';
            count--;
        }
        for(int i=count0; i<count0+count2; i++){
            res[i]='?';
            if(n==1){
                res[i]='-';
            }
            count--;
        }
        for(int i=n-count1-1; i>=n-count1-count2; i--){
            res[i]='?';
            if(n==1){
                res[i]='-';
            }
            count--;
        }

        cout<<res<<endl;
    }

}
