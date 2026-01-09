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
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            

            if(n%2==0){
                cout<<2<<" ";
            } else{
                cout<<3<<" ";
            }
            vi odd;
            vi even;
            for(int i=1; i<=n; i++){
                if(n%2==0 && i==2){
                    continue;
                } else if(n%2!=0 && i==3){
                    continue;
                }

                if(i%2==0){
                    even.push_back(i);
                } else{
                    odd.push_back(i);
                }
            }


            int oddl = odd.size();
            int evenl = even.size();

            int l = min(oddl, evenl);

            for(int i=0; i<l; i++){
                cout<<odd[i]<<" "<<even[i]<<" ";
            }

            if(oddl>evenl){
                cout<<odd[l];
            } else if(evenl>oddl){
                cout<<even[l];
            }

            en;
        }
}