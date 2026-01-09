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

int columnTonumber(string &col){
    int num =0;
    for(char c: col){
        num = num*26+(c-'A'+1);
    }
    return num;
}

string numberTocolumn(int num){
    string col;
    while(num>0){
        num--;
        col = char('A'+num%26)+col;
        num/=26;
    }
    return col;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s[0]=='R' && isdigit(s[1]) && s.find('C') != string::npos){
            size_t cPos = s.find('C');
            int row = stoi(s.substr(1,cPos-1));
            int col = stoi(s.substr(cPos+1));
            cout<<numberTocolumn(col)<<row<<endl;
        } else{
            size_t i=0;
            while(isalpha(s[i])) 
            i++;
            string col = s.substr(0,i);
            int row = stoi(s.substr(i));
            cout<<"R"<<row<<"C"<<columnTonumber(col)<<endl;
        }
    }
    

}