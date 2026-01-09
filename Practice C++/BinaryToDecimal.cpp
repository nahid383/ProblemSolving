#include<iostream>
using namespace std;
int binTodec(int binNum){
    int ans = 0; 
    int pow = 1;
    while(binNum>0){
        int rem = binNum%10;
        ans = ans + (rem*pow);

        binNum/=10;
        pow*=2;
    }
    cout<<ans;
}

int main(){
    int binNum;
    cin>>binNum;
    binTodec(binNum);
}