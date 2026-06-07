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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len = s.length();
        double mass=0;
        double C = 12.01;
        double H = 1.008;
        double O = 16.00;
        double N = 14.01;
    
        for(int i=0; i<len;){
            char element = s[i];
            i++;

            int num = 0;
            while(i<s.size() && isdigit(s[i])){
                num=num*10 + (s[i]-'0');
                i++;
            }
            if (num==0) num=1;

            if(element == 'C') mass += C*num;
            else if (element == 'H') mass += H*num;
            else if (element == 'O') mass += O*num;
            else if (element == 'N') mass += N*num;
        }

        cout<<fixed<<setprecision(3)<<mass<<endl;
    }
    

}