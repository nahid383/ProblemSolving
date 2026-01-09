#include<iostream>
using namespace std;

int decimalTobinary(int decNum){
    int ans = 0, pow = 1;
    while(decNum>0){
        int rem = decNum%2;
        decNum=decNum/2;

        ans = ans + (rem*pow);
        pow = pow*10;
    }
    cout<<ans;
}
int main(){
    int decNum;
    cin>>decNum;
    decimalTobinary(decNum);
}