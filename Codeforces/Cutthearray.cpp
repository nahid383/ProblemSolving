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
    while(t--) {
        int n; 
        cin>>n;
        vi a(n);
        for (int i=0; i<n; ++i) 
            cin>>a[i];

        vi pref(n+1, 0);
        for (int i=0; i<n; ++i) 
            pref[i+1] = (pref[i]+a[i])%3;

        bool ok=false;

        if (pref[n]%3==0) {  
            for(int l=1; l<=n-2 && !ok; ++l){
                for(int r=l+1; r<=n-1; ++r) {
                    int s1 = pref[l];
                    int s2 = (pref[r]-pref[l]) % 3;
                    if(s2<0)
                    s2+=3;
                    int s3 = (pref[n]-pref[r])%3;
                    if(s3<0) 
                    s3+=3;
                    if((s1!=s2 && s2!=s3 && s1!=s3)||(s1==s2 && s2==s3)){
                        cout<<l<<" "<<r<<"\n";
                        ok=true;
                        break;
                    }
                }
            }
        }

        if(!ok) 
        cout<<"0 0\n";



    }

    return 0;
}
