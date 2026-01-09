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
        int n;
        cin>>n;
        vi a(n);
        int maxi = 0;
        vi freq(n+1, 0);
        foriton{
            cin>>a[i];
            maxi = max(a[i], maxi);
            freq[a[i]]++;
            
        }

        int highfreq = 0;
        for(int i=1; i<=maxi; i++){
            highfreq=max(highfreq, freq[i]);
        }
        int maximumlength = 0;
        int length=0;
        for(int i=highfreq; i>=1; i--){
            for(int j=1; j<=maxi; j++){
                if(freq[j]>=i){
                    length+=i;
                }
                
            }
            maximumlength=max(maximumlength,length);
            length=0;
        }

        cout<<maximumlength<<endl;



    

    }

}
