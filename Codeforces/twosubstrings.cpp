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
#define forntoi(n) for (long long i = n - 1; i >= 0; i--)
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
    int len = s.length();
    if(len<4){
        no;
        return 0;
    }
    //1st check
    vector<char> sub;
    foriton(len){
        sub.push_back(s[i]);

    }
    bool ab = false;
    bool ba = false;
    foriton(len-1){
        if(s[i]=='A' && s[i+1]=='B'){
            // sub.erase(sub.begin()+i, sub.begin()+i+2);
            sub[i]='0';
            sub[i+1]='0';
            // sub.erase(sub.begin()+i);
            ab=true;
            break;
        } 
    }
    foriton(sub.size()-1){
        if(sub[i]=='B' && sub[i+1]=='A'){
            sub[i]='0';
            sub[i+1]='0';
            ba=true;
            break;
        }
    }
    if(ab && ba){
        yes;
        return 0;
    }

    //2nd check
    vector<char> sub2;
    foriton(len){
        sub2.push_back(s[i]);
    }
    bool ab1 = false;
    bool ba2 = false;
    foriton(len-1){
        if(s[i]=='B' && s[i+1]=='A'){
            // sub2.erase(sub2.begin()+i, sub2.begin()+i+2);
            sub2[i]='0';
            sub2[i+1]='0';
            // sub.erase(sub.begin()+i);
            ba2=true;
            break;
        } 
    }
    foriton(sub2.size()-1){
        if(sub2[i]=='A' && sub2[i+1]=='B'){
            sub2[i]='0';
            sub2[i+1]='0';
            ab1=true;
            break;
        }
    }

    if((ab1 && ba2)){
        yes;
        return 0;
    } 
    no;
    // cout<<sub.size()<<endl;
}