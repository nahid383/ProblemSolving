#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPrime(int num){
    if(num<2){
        return false;
    }
    int flag = 1;
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            flag=0;
            return false;
        }
    }
        return true;

}
int countPrimeDivisor(int num){
    int primeDivisor = 0;
    for(int i=2; i*i<=num; i++){
        if(isPrime(i) && num%i==0){
            primeDivisor++;
            while(num%i==0){
                num/=i;
            }
        }
    }
    // if(primeDivisor==2){
    //     return true;
    // } else{
    //     return false;
    // }
    if(num>1 && isPrime(num)){
        primeDivisor++;
    }
    return primeDivisor;
}
bool almostPrime(int num){
    int ppp = countPrimeDivisor(num);
    if(ppp==2){
        return true;
    } else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    int almostPrimee = 0;
    for(int i=2; i<=n; i++){
        if(almostPrime(i)){
            almostPrimee++;
        }
        // if(isPrime && n%i==0){
        //     primeDivisor++;
        // }
    }
    cout<<almostPrimee<<endl;
}