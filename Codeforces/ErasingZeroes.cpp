#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#include<unordered_map>
#include<map>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"0"<<endl
#define ans  cout<<result<<endl
#define en endl
#define MOD 998244353
#define ll long long
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int fst=-1, lst=-1;
        if(n==1){
            cout<<0<<en;
            continue;
        }
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                fst=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(s[i]=='1'){
                lst=i;
                break;
            }
        }
        if(fst==-1){
            mone;
            continue;
        }
        int result = 0;
        bool issorted = true;
        for(int i=fst; i<=lst; i++){
            if(s[i]=='0'){
                result++;
            }
        }
        ans;
    }
       
}
