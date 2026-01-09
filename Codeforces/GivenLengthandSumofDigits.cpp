/*
 N   N   AAAAA  H   H  III  DDDD  
 NN  N  A     A H   H   I   D   D 
 N N N  AAAAAAA HHHHH   I   D   D 
 N  NN  A     A H   H   I   D   D 
 N   N  A     A H   H  III  DDDD  
*/

#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"-1\n"
// #define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i--)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;
ll n, freq[MAX], m, q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,s;
    cin >> m >> s;

    if (s == 0 && m > 1) {
        cout << "-1 -1\n";
        return 0;
    } 
    else if (s == 0 && m == 1) {
        cout << "0 0\n";
        return 0;
    }

    string ans = "", temp = "";
    bool flag = false;
    
    for (int i = 0; i < m; i++) {
        if (s > 9) {
            ans += "9";
            temp += "9";
            s -= 9;
        } 
        else if (s > 0) {
            ans += to_string(s);
            if (i == m - 1) {
                temp += to_string(s);
            } 
            else {
                temp += to_string(s - 1);
                flag = true;
            }
            s = 0;
        } 
        else {
            ans += "0";
            temp += "0";
        }
    }
    
    if (flag) {
        temp[temp.length() - 1] = '1';
    }
    
    if (s > 0) {
        cout << "-1 -1\n";
    } 
    else {
        int n = temp.length();
        string x = "";
        for (int i = 0; i < n; i++) {
            x = temp[i] + x;
        }
        cout << x << " " << ans << endl;
    }
}
