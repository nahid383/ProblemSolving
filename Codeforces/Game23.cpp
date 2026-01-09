#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool isDiveded(int m){
    int div1 = m/3;
    int div2 = m/2;
    int sum1 = div1*3;
    int sum2 = div2*2;
    if(sum1==m || sum2==m){
        return true;

    }
    else{
        return false;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    if(m%n!=0){
        cout<<"-1"<<endl;
        return 0;
    }
   
    int count1 = 0;
    int count2 = 0;
    if(m/n==1){
        cout<<"0"<<endl;
        return 0;
    }
     if(!isDiveded(m)){
        cout<<"-1"<<endl;
        return 0;
    }
    // int su = n;
    // for(int i=1; ; i++){
    //      if(su==m){
    //         break;
    //     }
    //     if(su>m){
    //         count1++;
    //         break;
    //     }
    //     su=su*3;
    //     count1++;
       
    // }
    // int du = n;
    // for(int i=1; ; i++){
    //     if(du==m){
    //         break;
    //     }
    //      if(du>m){
    //         count2++;
    //         break;
    //     }
    //     du=du*2;
    //     count2++;
        
       
    // }
    // int minimum = min(count1,count2);
    int x = m/n;
    while(x%2==0){
        x/=2;
        count1++;
    }
    while(x%3==0){
        x/=3;
        count1++;
    }
    if(x!=1){
        cout<<"-1"<<endl;

    } else{
        cout<<count1<<endl;
        
    }
  
}