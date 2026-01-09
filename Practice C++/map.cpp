#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string, int> m;

    m["tv"] = 12000;
    m["watch"] = 1700;
    m["tablet"] = 32500;
    m["laptop"] = 60000;
    m["phone"] = 19500;
    m["headphones"] = 1200;
    m["camera"] = 2500;

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}