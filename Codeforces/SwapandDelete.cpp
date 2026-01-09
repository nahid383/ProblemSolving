#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int length = s.length();
        // cout<<length<<endl;
        bool good = false;
        // int count0 = 0, count1 = 0;
        // for(int i=0; i<length; i++){
        //     // for(int j=length-1; j>=0; j--){
        //     //     if(a[i]=a[j])
        //     // }
        //     if(s[i]=='1'){
        //         count1++;
        //     }
        //     else{
        //         count0++;
        //     }
        // }
        int count1 = count(s.begin(), s.end(), '1');
        int count0 = length - count1;
        int mismatch = (min(count0,count1))*2;
        // cout<<length-mismatch<<endl;
        int i;
        for(i=0; i<length; i++){
            if(s[i]=='0'){
                if(count1>0){
                    count1--;
                }
                else{
                    break;
                }
            }
            else{
                if(count0>0){
                    count0--;
                }
                else{
                    break;
                }
            }
        }
        cout<<length-i<<endl;
    }
}