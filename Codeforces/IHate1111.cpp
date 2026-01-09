#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define ll long long
#define e endl
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        bool isSum = false;
        // if(x==63909){
        //     isSum = true;
        // }
        if(x%11==0 ||x%111==0 || x%11111==0||x%1111111==0|| x%1111==0 || x%111111==0 || x%11111111==0){
            isSum = true;
        }
        // } else if((x-111)%11==0){
        //     isSum = true;
        // } else if((x-11111)%111==0 || (x-11111)%11==0){
        //     isSum= true;
        // } else if((x-11111-111)%11==0){
        //     isSum = true;
        // }
        int y;
        for(int i=0; i<=11; ++i){
            y = x - 111*i;

            if(y%11==0 && y>=0){
                isSum = true;
                break;
            } 
        }
        if(isSum){
            cout<<"YES"<<e;
        } else{
            cout<<"NO"<<e;
        }
    }
}