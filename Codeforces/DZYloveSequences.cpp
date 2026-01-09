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
#define pb(x) push_back(x) 
#define foriton(n) for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define print(a, n) for (long long i = 0; i < n; i++) cout << a[i] <<" ";
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
        
    double n;
    cin>>n;
    vl a(n);
    scan(a,n);

    if(n<=2){
        cout<<n<<endl;
        return 0;
    }

    // ll idx = -1;
    // double cnt = 1;
    // bool isonce = false;
    // vector<double> freq;
    // ll maxCount =1;
    // foriton(n-1){
    //     if(a[i]<a[i+1]){
    //         cnt++;
    //         // maxCount = max(cnt, maxCount);
    //     } else{
            // if(isonce){
            //     cnt = 1;
            //     isonce = false;
            //     i = idx;
            //     // i--;
            // } else{
            //     cnt++;
            //     maxCount = max(cnt, maxCount);
            //     idx = i;
            //     isonce=true;
            // }
    //         freq.push_back(cnt);
    //         cnt=1;
    //     }
    // }
    // freq.push_back(cnt);

    // double size = freq.size();

    // if(size==1){
    //     cout<<n<<endl;
    //     return 0;
    // }
    // double maxSum = 0;
    // foriton(size){
    //     cout<<freq[i]<<" "; 
    // }
    // foriton(size-1){
    //     maxSum = max(maxSum,freq[i] + freq[i+1]);
    // }

    int l = 0;
    int bad = 0;               
    deque<int> q;              
    int result = 1;

    for(int r = 0; r < n-1; r++){
        if(a[r] >= a[r+1]){
            q.push_back(r);
            bad++;
        }

        while(bad>1){      
            if(!q.empty() && q.front()==l)
                q.pop_front(), bad--;
            l++;
        }

        result = max(result, r-l+2);  
    }

    ans;
}