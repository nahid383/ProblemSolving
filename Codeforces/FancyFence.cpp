#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        float angle;
        cin>>angle;

        float side;
        side = 360 / (180-angle);
        int side2;
        side2 = 360 / (180-(int)angle);

        if(side==side2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

}