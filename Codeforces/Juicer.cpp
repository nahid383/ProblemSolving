#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,b,d;
    cin>>n>>b>>d;
    vector<int> a(n);
    int wastage=0;
    int count = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]<=b){
            wastage+=a[i];
        }
        if(wastage>d){
            count++;
            wastage = 0;
        }
    }

   
    cout<<count<<endl;
}