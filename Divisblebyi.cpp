/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/

#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define vs vector<string>
#define bo bool 
#define iP isPossible
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i=i-2)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        stack<int> s;
        
        int st = 1;
        int end = n;
        if(n%2==0){
            for(int i=0; i<n/2; i++){
                s.push(end);
                end--;
                s.push(st);
                st++;
            } 
        } else{
            for(int i=0; i<n/2; i++){
                s.push(st);
                st++;
                s.push(end);
                end--;                
            }
            s.push(st);
        }

        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }

        en;

    }
    
}
