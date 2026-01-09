#include<iostream>
#include<string.h>
using namespace std;
int main(){
    
    char strings[101];
    cin>>strings;
    int len = strlen(strings);
    int count_Q=0;
    int count_A=0;
    int ans = 0;
    for(int i=0; i<len; i++){
        if(strings[i]=='Q'){
            ans = ans + count_A;
            count_Q++;
        }
        else if(strings[i]=='A' && count_Q!=-1){
            count_A=count_A+count_Q;
        }
    }
    // int flag=0;
    // for(int i=0; i<len-1; i++){
    //     if(strings[i]=='A'){
    //     for(int j=i+1; j<len; j++){
    //         if(strings[j]=='Q'){
    //             flag=1;
    //         }
    //     }
    //     if(flag==0){
    //         count_A--;
    //     }
    // }
 
    // }
    //    if(strings[len-1]=='A'){
    //     count_A--;
    // }
    // cout<<count_A*count_Q<<endl;
    cout<<ans<<endl;
}
//QQAAQASGAYAAAAKAKAQIQEAQAIAAIAQQQQQ
