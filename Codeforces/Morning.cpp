#include<iostream>
#include<string>
#include<math.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char pin[5];
        cin>>pin;
        // int count = 0;
        // for(int i=0; i<3; i++){
        //     if(pin[i]=='0'){
        //         count+=(10-(pin[i+1]-'0'));
        //     }
        //     else{
        //         count+=abs((pin[i]-'0')-(pin[i+1]-'0'));
        //     }
        // }
        // if(pin[3]=='0'){
        //     count = count+(10-(pin[2]-'0'));
        // }
        // else{
        //     count = count + abs((pin[3]-'0')-(pin[2]-'0'));
        // }
       
        // count = count + 4+(pin[0]-'0')-1;
        // cout<<count<<endl;
        int a = (pin[0]=='0')?10:pin[0]-'0';
        int b = (pin[1]=='0')?10:pin[1]-'0';
        int c = (pin[2]=='0')?10:pin[2]-'0';
        int d = (pin[3]=='0')?10:pin[3]-'0';
        int count = 4 + a-1;
        count+=abs(b-a);
        count+=abs(c-b);
        count+=abs(d-c);

        cout<<count<<endl;

        
    }
}
