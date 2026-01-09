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
#define pb(x) push_back(x) 
#define foriton(n) for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define print(a, n) for (long long i = 0; i < n; i++) cout << a[i] <<" ";
#define forntoi for (long long i = n - 1; i >= 0; i = i - 2)
#define sorted(a) sort(a.begin(), a.end())
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

void solve(int n, vi &answer){
    if(n==1){
        answer.pb(1);
        return;
    }
    answer.pb(n);

    for(int i=1; i<n; i++){
        answer.pb(i);
    }
}

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int n;
    cin>>n;
    vi answer;
    solve(n,answer);
    for(int i:answer){
        cout<<i<<" ";
    }
    // int i=1;
    // int j=n;
    // while(i<j){
    //     cout<<j<<" "<<i<<" ";
    //     j--;
    //     i++;
    // }

    // if(i==j){
    //     cout<<i;
    // }
    

}