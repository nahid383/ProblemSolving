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
#define print(a, n) for (long long i = 0; i < n; i++) cout << a[i] <<" ";
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
        
    string s;
    cin>>s;

    ll n = s.length();
    ll count=0;

    // foriton(n){
    //     for(ll j=i+5; j<n; j++){
    //         if(s[i]=='h'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='v'&&s[i+4]=='y'){
    //             if(s[j]=='m'&&s[j+1]=='e'&&s[j+2]=='t'&&s[j+3]=='a'&&s[j+4]=='l'){
    //                 count++;
    //             }
    //         }
    //     }
    // }
    stack<string> st;
    bool isHeavey = false;
    // foriton(n-4){
    //     if(s[i]=='h'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='v'&&s[i+4]=='y'){
    //         string sub = s.substr(i,5);
    //         st.push(sub);
    //         isHeavey=true;
    //     } else if(s[i]=='m'&&s[i+1]=='e'&&s[i+2]=='t'&&s[i+3]=='a'&&s[i+4]=='l'){
    //         string sub = s.substr(i,5);
    //         if(isHeavey){
    //             st.push(sub);
    //         }
    //     }
    // }

    foriton(n-4){
        if(s.substr(i,5)=="heavy"){
            st.push(s.substr(i,5));
            isHeavey=true;
        } 
        if(s.substr(i,5)=="metal"){
            count+=st.size();
        }
    }

    cout<<count<<endl;

}