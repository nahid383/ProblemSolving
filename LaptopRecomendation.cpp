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
#define si set<int>
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
        map<int, int> freq;
        foriton{
            cin>>a[i];
            freq[a[i]]++;
        }
        

        int count = 0;
        int maxi = 0;
        int result;
        for(int i=1; i<=10; i++){
            if(freq[i]>maxi){
                maxi=freq[i];
                result=i;
            }
        }

        for(int i=1; i<=10; i++){
            if(freq[i]==maxi){
                count++;
            }
        }

        if(count>1){
            cout<<"CONFUSED"<<endl;
        } else{
            ans;
        }

        

    }

}
