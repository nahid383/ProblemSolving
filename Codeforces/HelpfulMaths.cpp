#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"0\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=0; i<l; i++)
#define forntoi for(long long i=n-1; i>=0; i--)
#define en "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    int l = s.length();
    vector<char> s1;
    foriton{
        if(s[i]!='+'){
            s1.push_back(s[i]);
        }
    }
    sort(s1.begin(), s1.end());
    int l1 = s1.size();
    for(int i=0; i<l1; i++){
        cout<<s1[i];
        if(i!=l1-1){
            cout<<"+";
        }
    }
    cout<<en;
}
