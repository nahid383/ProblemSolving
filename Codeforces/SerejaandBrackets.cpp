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
 
int RegularBracket(string s, int l, int r){
    stack<char> st;
    int count = 0;
    l = l-1;
    r = r-1;
    for(int i=l; i<=r; i++){
        if(s[i]=='('){
            st.push(s[i]);
        } else{
            if(!st.empty()){
                st.pop();
                count+=2;
            }
        }
    }
    st.empty();
    return count;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    string s;
    cin>>s;
    int n;
    cin>>n;
    foriton(n){
        int l,r;
        cin>>l>>r;
        if(l==r){
            cout<<0<<endl;
            continue;
        } else if(s[l-1]==')' && s[r-1]=='(' && r==l+1){
            cout<<0<<endl;
            continue;
        }
        cout<<RegularBracket(s,l,r)<<endl;
    }
    
}