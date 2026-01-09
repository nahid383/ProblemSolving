#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
    pair<int, int> p={1,2};
    cout<<p.first<<endl;
    cout<<p.second<<endl;


    pair<int, pair<string, int>> pq={1,{"nahid", 3}};
    cout<<pq.first<<endl;
    cout<<pq.second.first<<endl;
    cout<<pq.second.second<<endl;
}