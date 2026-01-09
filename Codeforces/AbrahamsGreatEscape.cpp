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
#define foriton for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
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
        
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k==n*n-1){
			no;
			continue;
		}
		yes;
		vector<vector<int>>grid(n,vector<int>(n,0));
 
		int diff = n*n-k;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(diff>1 && j==0){
					cout<<"R";
					diff--;
				} else if(diff==1 && j==0){
					cout<<"U";
					diff--;
				} else if(diff){
					cout<<"L";
					diff--;
				} else cout<<"D";
			}
			cout<<endl;
		}
        
    }

}