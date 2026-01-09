#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#include<unordered_map>
#include<map>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define en endl
#define ll long long
using namespace std;

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
            int l = s.length();
            if(l%2==0){
                for(int i=0; i<l; i+=2){
                    swap(s[i],s[i+1]);
                }
            } else{
                for(int i=0; i<l-1; i+=2){
                    swap(s[i], s[i+1]);
                }
            }
            for(int i=0; i<l; i++){
                if(s[i]>='a'  && s[i]<='z'){
                    s[i]='z' - (s[i] - 'a');
                } 
                //  if(s[i]=='z'){
                //     s[i]='a';
                //  }
            }
            cout<<s<<en;
       }
}
