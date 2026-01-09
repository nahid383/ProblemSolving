#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        // int l = s1.size();
        // int s1_one = 0;
        // int s1_zero = 0;
        // int s2_one = 0;
        // int s2_zero = 0;
        // int mins1, mins2;
        int add = 0, remove = 0;
        for(int i=0; i<n; i++){
            if(s1[i]=='0' && s2[i]=='1'){
                add++;
            }
            else if(s1[i]=='1' && s2[i] =='0'){
                remove++;
            }
        }
        // for(int i=0; i<n; i++){
        //     if(s1[i]=='1'){
        //         s1_one++;
        //     }
        //     else if(s1[i]=='0'){
        //         s1_zero++;
        //     }
            
        //     if(s2[i]=='1'){
        //         s2_one++;
        //     }
        //     else if(s2[i]=='0'){
        //         s2_zero++;
        //     }
            
        // }
        // mins1 = min(s1_one,s1_zero);
        // mins2 = min(s2_one,s2_zero);
        int result = max(add,remove);
        // if((s1_one==0 && s2_one==0) || (s1_zero==0 && s2_zero==0)){
        //     cout<<"0"<<endl;
        // }
        // else{
            cout<<result<<endl;
        // }
        
    }
}