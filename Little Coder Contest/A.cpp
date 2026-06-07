#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#define e endl
#define ll long long
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    map<string, string> names;
    
    
  

    for(int i=0; i<n; i++){
        string name;
        string ip;
        cin>>name>>ip;
        names[ip] = name;
    }

    for(int j=0; j<m; j++){
        string name2;
        string ip2;
        cin>>name2>>ip2;
        cout<<name2<<" "<<ip2<<" #";
        ip2.pop_back();
        cout<<names[ip2]<<e;
    }
}
/* 
ekahne question a chaoa hoise command er ip er sathe name er j ip match korbe 
commander shey ip er por oy name ta print korte hbe
as usual name er string ip er string input niye nibo
then command er string nibo and ip nibo and ip input neoar por oi ip address j namer
ip addresser sathe match hbe sheta khuje ber korbo. ejonno
map header file use kortesi
at 1st name2 and ip2 input niye ota print kore dibo then pop.back er madhome
ip2 er semicolon ta delete kore dibo. then mapping er madhome check kore dekhbo j 
ip2 kon namer ip er sathe match kortese.
name and ip input neoar somoy map er names er modhe name1 store kore rakha hoisilo agey

*/