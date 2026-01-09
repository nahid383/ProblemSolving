#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define en endl
#define ll long long
using namespace std;
bool isConnsonant(char as){
    if(as!='a' && as!='e' && as!='i' && as!='o' && as!='u'){
        return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       int t;
       cin>>t;
       while(t--){
        int da,db,dc;
        cin>>da>>db>>dc;
        int sa,sb,sc;
        cin>>sa>>sb>>sc;
        int td = da+db+dc;
        int ts = sa+sb+sc;

        if(td>ts){
            cout<<"Dragon"<<en;
        } else if(ts>td){
            cout<<"Sloth"<<en;
        } else{
            if(da>sa){
                cout<<"Dragon"<<en;
            } else if(sa>da){
                cout<<"Sloth"<<en;
            } else{
                if(db>sb){
                    cout<<"Dragon"<<en;
                } else if(sb>db){
                    cout<<"Sloth"<<en;
                } else{
                    cout<<"Tie"<<en;
                }
            }
        }

       }
}