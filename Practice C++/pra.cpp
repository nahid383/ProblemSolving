/*
 
#####   #####   #   #   #       #   #
#       #       #   #   #        # #
#####   ####    #####   #         #
    #   #       #   #   #         #
#####   #####   #   #   #####     #
 
*/
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define el '\n'
#define pi 3.14159265358979323846
#define BMW_3nn_3nn_3nn      \
ios::sync_with_stdio(0); \
cin.tie(0);              \
cout.tie(0);
 
const int mod = 1e9 + 7;
using namespace std;
// memset(arr,0,sizeof(arr)); 2d arrar is zero
// freopen("mex.in", "r", stdin);
//-------------------------------------------------
 
//-------------------------------------------------
int main() {
    BMW_3nn_3nn_3nn;
    ll w,h,d,n,res1=0,res2=0,res3=0,t;
    cin>>w>>h>>d;
    cin>>n;
    t=n;
    res1=gcd(n,w);
    n/=gcd(n,w);
    res2=gcd(n,h);
    n/=gcd(n,h);
    res3=gcd(n,d);
    n/=gcd(n,d);
    if (((res1)*(res2)*(res3))==t)cout<<res1-1<<' '<<res2-1<<' '<<res3-1<<el;
    else cout<<-1<<el;
    return 0;
} 