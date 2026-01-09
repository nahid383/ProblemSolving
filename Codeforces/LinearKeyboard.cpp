#include<bits/stdc++.h>
using namespace std;
long long n;
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i--)
#define en "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    n=26;
    while(t--){
        string st;
        cin>>st;
        string st2;
        cin>>st2;
        int count = 0;
        int count2 = 0;
        string a = st2;
        int l = st2.length();
        for(int i=1; i<st2.length(); i++){
            int pos1 = st.find(st2[i]);
            int pos2 = st.find(st2[i-1]);
            count=count+abs(pos1-pos2);
        }

        countt;

    }
}
//         for (int i = 1; i < s.length(); i++) {
//             int pos1 = k.find(s[i]);
//             int pos2 = k.find(s[i - 1]);
//             res += abs(pos1 - pos2);
//         }
 
//         cout << res << endl;
//     }
// }