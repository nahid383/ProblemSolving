/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/
#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mone cout << "-1\n"
#define ans cout << result << "\n"
#define countt cout << count << "\n"
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define foriton for(long long i = 0; i < n; i++)
#define in(a,n) for(long long i=0; i<n; i++) cin>>a[i];
#define forntoi for(long long i = n - 1; i >= 0; i = i - 2)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

// int functon(string s){
//     sort(s.begin(), s.end());
//     int count = 0;
//     for(int i=0; i<s.size()-1; i++){
//         if(s[i]!=s[i+1]){
//             count++;
//         }
//     }

//     return count;
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        
    

        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char, int> fa;
        foriton{
            fa[s[i]]++;
        }

        map<char, int> fb;
        int sum = 0;
        foriton{
            fb[s[i]]++;
            fa[s[i]]--;

            if(fa[s[i]]==0){
                fa.erase(s[i]);
            }

            int result = fa.size()+fb.size();

            sum = max(sum, result);
        }

        cout<<sum<<endl;
    //     vi freq(26, 0);
    //     foriton{
    //         freq[s[i]-'a']++;
    //     }
    //     int count=0;
    //    for(int i=0; i<26; i++) {
    //         if(freq[i]>1) {
    //             count += 2;
    //         }else if(freq[i]==1) {
    //             count+=1;
    //         }
    //     }
    // int cmp = 0;
    //     for(int j=1; j<s.size(); j++){
    //         string x="";
    //         string y="";
    //         for(int k=0; k<j; k++){
    //             y+=s[k];
    //         }
    //         for(int k=j; k<s.size(); k++){
    //             x+=s[k];
    //         }
    //         int result1 = functon(y);
    //         int result2 = functon(x);
    //         int result3 = (functon(x)+functon(y));

    //         if(result3>cmp){
    //             cmp=result3;
    //         }
    //     }


        
    //     cout<<cmp+2<<endl;
    

    }

}
