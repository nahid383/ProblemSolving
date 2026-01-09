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
#include <cstdint>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define en "\n"
#define MOD 998244353
#define ll long long
using namespace std;
const int MAX = 1e5+5;
void solve(int h, int c, int t){
    int count = 0;
    int average = t;
    int barrel = 0;
    int step = 0;
    int differ = 10100000;
    bool isSum = false;
    for(int i=0; ; i++){
        barrel = barrel+h;
        count++;
        double avg = (double)barrel/count;
        if(avg == average){
            isSum=true;
            break;
        } else{
            double diff = abs(avg - average);
            if(diff < differ){
                differ = diff;
                step = count;
            } else if(diff>differ){
                break;
            }
        }
        barrel = barrel + c;
        count++;
        avg = (double)barrel/count;
        if(avg==average){
            isSum=true;
            break;
        }  else{
            double diff = abs(avg - average);
            if(diff < differ){
                differ = diff;
                step = count;
            } else if(diff>differ){
                break;
            }
        }
        if(count>10000)
        break;
    }
    if(isSum)
    cout<<count<<en;
    else{
        cout<<step<<en;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,c,t;
        cin>>h>>c>>t;
        solve(h,c,t);
    }
}
