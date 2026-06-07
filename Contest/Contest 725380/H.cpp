#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define e endl
#define ll long long
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    list<int> intNum;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        intNum.push_back(a);
    }

    
    intNum.sort();
    intNum.unique();



    
    if(intNum.size()==1){
        no;
    } else{
        auto iterator = intNum.begin();
        iterator++;

        cout<<*iterator<<e;
    }

}