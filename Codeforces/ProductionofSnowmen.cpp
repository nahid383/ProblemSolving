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
        
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vl a(n), b(n), c(n);
        scan(a, n);
        scan(b, n);
        scan(c, n);

        ll res=0, nowi=0, nowk=0, e=0;
        foriton(n){
            bool bad = false;
		    for(ll j=0;j<n;j++){
	       	    // e=0;
			    ll ii=(i+j)%n;
			    // if(ii==0){
                //     ii=n;
                // } 
			    ll jj=j;
			    if(a[ii]>=b[jj]){
                    bad=true;
				    // e=1;
				    break;
			    }	
		    }
		    if(!bad){
                nowi++;
            }
	    } 
        foriton(n){
            bool bad = false;
		    for(ll j=0;j<n;j++){
	       	    // e=0;
			    ll ii=(i+j)%n;
			    // if(ii==0){
                //     ii=n;
                // } 
			    ll jj=j;
			    if(c[ii]<=b[jj]){
                    bad = true;
				    // e=1;
				    break;
			    }	
		    }
		    if(!bad){
                nowk++;
            }
	    } 
        cout<<nowi*nowk*n<<endl;
    }
}