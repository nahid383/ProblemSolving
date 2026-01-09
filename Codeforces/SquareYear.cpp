#include<iostream>
#include<string.h>
#include<string>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char year[5];
        cin>>year;
      //  int num = stoi(year);
        // int flag = 0;
        // char first = strcat(year[0]+year[1]);second;
        // int fist = (year[0]-'0')*10+(year[1] -'0');
        // int second = (year[2] - '0')*10 + (year[3]-'0');
        int sum = (year[0]-'0')*1000 + (year[1]-'0')*100+(year[2]-'0')*10+(year[3]-'0');
        // if(sum*sum==stoi(year)){
        //     cout<<fist<<" "<<second<<endl;
        // }
        // else{
        //     cout<<-1<<endl;
        // }
        int sq = (int)sqrt(sum);
        if(sq*sq==sum){
            cout<<"0 "<<sq<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
        // for(int i=0; i*i<num; i++){
        //     int sq = i*i;
        //     int rem = num - sq;
        //     int sq2 = sqrt(rem);
        //     int rot = sq2*sq2;
        //     if(rot == rem){
        //         flag = 1;
        //         break;
        //         fi
        //     }
        // }
    }
}