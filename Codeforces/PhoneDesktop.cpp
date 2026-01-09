#include<iostream>
using namespace std;
#define o cout
#define i cin
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        i>>x>>y;
        int c = (y+1)/2;
        int rem = (c*15)-(y*4);
        if(x<=rem){
            o<<c<<endl;
        }
        else if(x>rem){
            int rem2=x-rem;
            int d = (rem2+14)/15;
            o<<c+d<<endl;
        }

    }
}
 