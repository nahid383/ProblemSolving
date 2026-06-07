#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#define e endl
using namespace std;

int main(){
    int n;
    cin >> n;

    // string names[1000001];
    // int count[1000001] = {0};
    // int count3 = 0;

    map<string, int> count;

    for(int i = 0; i < n; i++){
        string name;
        cin >> name;

        if(count[name]==0){
            cout<<"OK"<<e;
        } else{
            cout<<name<<count[name]<<e;
        }

        count[name]++;
        // bool found = false;

        // for(int j = 0; j < count3; j++){
        //     if(names[j] == name){
        //         found = true;
        //         cout << name << count[j] << e;
                
        //         // Save the new constructed name
        //         names[count3] = name + to_string(count[j]);
        //         count[count3] = 1;
        //         count[j]++;
        //         count3++;
        //         break;
        //     }
        // }

        // if(!found){
        //     names[count3] = name;
        //     count[count3] = 1;
        //     count3++;
        //     cout << "OK" << e;
        // }
    }
}

/*  
ami ekhono stl shikhi nay j karone 1st time ami manually onek loop diye korar
try kori. kintu time limit excced hoy bar bar. er por map ey topic ta yt theke dekhe 
eta abr try kori

ekhane muloto ekta nam jodi 1st thake tahole ok print korbe nahole
oy name er sathe tar count print korbe. r map diye muloto unique element gulo 
kotobar kore ache ta ber kora jay
protita name er sathe ekta kore integr value add thake ja oy name
kotobar astese ta count kore
*/

/*
1st a ekta string nibo jetar modhe shob nam gulo store korbo pore
echar unique name gulo count korar jonno ekta frequency array nibo
then ekat kore name input nibo and check korbo j ey nam ta age ache kina 
check korar jonno amra notun ekta loop chalabo and dekhbo ager namer sathe
match koraye j exist kore kina. jodi exist na kore tahole ok return korbe
r jodi exist kore tahole koto tomobar namta exist kortese sheta count korbe 
ans namer seshe suffix hisabe count ta add kore dibe. and then return korbe
*/