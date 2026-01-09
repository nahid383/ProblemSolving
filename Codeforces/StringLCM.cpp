#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define e endl
#define ll long long
using namespace std;
int gcd(int a, int b){
    while(b){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int lcm(int a, int b){
    return a*b / gcd(a,b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int sl = s.length();
        int tl = t.length();
        int s_a = 0;
        int s_b = 0;
        int t_a = 0;
        int t_b = 0;
        int sum1=0, sum2=0;
        for(int i=0; i<sl; i++){
            if(s[i]=='a'){
                s_a++;
            } else{
                s_b++;
            }
            sum1+=(s[i]-'0');
        }
        for(int i=0; i<tl; i++){
            if(t[i]=='a'){
                t_a++;
            } else{
                t_b++;
            }
            sum2+=(t[i]-'0');
        }
        int len = lcm(sl,tl);
        string s1="", t1 = "";

        for(int i=0; i<len/sl; i++){
            s1+=s;
        }
        for(int i=0; i<len/tl; i++){
            t1+=t;
        }

        if(s1==t1){
            cout<<s1<<e;
        } else{
            cout<<-1<<e;
        }
        // cout<<sum1<<" "<<sum2;
    //      if(sum1%sum2==0 || sum2%sum1==0){
    //         if(sum1>sum2){
    //             cout<<s<<e;
    //         } else{
    //             cout<<t<<e;
    //         }
    //     }
    //    else if((s_a==0 && t_a==0) || (s_b==0 && t_b==0)){
    //         for(int i=0; i<(sl*tl); i++){
    //             cout<<s[0];
    //         }
    //         cout<<e;
    //     } 
    //      else{
    //         cout<<-1<<e;
    //     }

    }
}
