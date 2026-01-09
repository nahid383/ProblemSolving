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
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i=i-2)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;
// bool isPossible(int n, const string &s){
//     vector<bool> marked(n, false);
//     for(int i=1; i<n-1; i++){
//         if(s[i]=='1' && !marked[i]){
//             marked[i-1]=true;
//             marked[i]=true;
//             marked[i+1]=true;
//         }
//     }
//     for(int i=0; i<n; i++){
//         if((s[i]=='1' && !marked[i])||(s[i]=='0' && marked[i])){
//             return false;
//         } 
//     }

//     return true;
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0;
        // int count0 = 0;
        // int count1 = 0;
        bool isPossible=true;
        // for(int i=0; i<n; i++){
        //     if(s[i]=='0'){
        //         count1=0;
        //         count0++;
        //     } else{
        //         count1++;
        //         count0=0;
        //     }
        //     if(count0==3||count1==3){
        //         isPossible=true;
        //         break;
        //     }

        // }

        // vector<char> marked(n,'0');
        // for(int i=1; i<n-1; i++){
        //     if(s[i]=='1'){
        //         marked[i-1] = '1';
        //         marked[i] = '1';
        //         marked[i+1] = '1';
        //     }
        // }
        // string marked_str(marked.begin(), marked.end());
        // cout<<marked_str<<endl;
        // if(marked_str == s){
        //     yes;
        // } else{
        //     no;
        // }
        while(i<n){
            if (s[i] == '1') {
                int j = i;
                while (j<n && s[j]=='1') 
                j++; 
                int len = j-i;
                if (len==1 || len==2) {
                    isPossible = false;
                    break;
                }
                i=j;
            } else {
                i++;
            }
        }
        if(isPossible){
            yes;
        } else{
            no;
        }
    }
}
