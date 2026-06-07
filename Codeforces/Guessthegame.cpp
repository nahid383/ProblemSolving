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

bool isLeapyear(ll n){
    if((n%400==0) || (n%4==0 && n%100!=0)){
        return true;
    } 
    return false;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll ref = 4;
    ll day=0;
    
    if(n>=2026){
        for(ll i=2026; i<n; i++){
            day += isLeapyear(i) ? 366:365;
        }

        ref = (ref+day%7)%7;
    } else{
        for(ll i=n; i<2026; i++){
            day += isLeapyear(i) ? 366:365;
        }

        ref = (ref-day%7 + 7)%7;
    }

    if(ref==0){
        cout<<"UNO"<<endl;
    } else if(ref==1){
        cout<<"Chess"<<endl;
    } else if(ref==2){
        cout<<"Football"<<endl;
    } else if(ref==3){
        cout<<"Dart"<<endl;
    } else if(ref==4){
        cout<<"Ludo"<<endl;
    } else if(ref==5){
        cout<<"Cricket"<<endl;
    } else{
        cout<<"FIFA"<<endl;
    }
    
}