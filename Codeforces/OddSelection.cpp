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
    #define forntoi for(long long i=n-1; i>=0; i--)
    #define en "\n"
    #define MOD 998244353
    // #define int long long
    const int MAX = 1e5+5;
     
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int t;
        cin>>t;
        while(t--){
            int n,x;
            cin>>n>>x;
            vector<int> a(n);
            int odd = 0;
            int even = 0;
            bool isOdd = false;
            bool isEven = false;
            foriton{
                cin>>a[i];
                if(a[i]%2==0){
                    isEven = true;
                    even++;
                } else{
                    odd++;
                    isOdd = true;
                }

            }
            if(n==1){
                if(isOdd){
                    yes;
                    continue;
                } else{
                    no;
                    continue;
                }
            }

            bool isSum = false;
            for(int i=1; i<=odd && i<=x; i=i+2){
                int m = x-i;
                if(m<=even){
                    isSum=true;
                    break;
                }
            }
            if(isSum){
                yes;

            } else{
                no;
            }
        }
     
    }