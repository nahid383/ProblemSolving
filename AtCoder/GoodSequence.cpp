#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long 
#define e endl
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int count = 0;
    int removal = 0;
    int current = a[0];
    for(int i=0; i<n; i++){
        if(current==a[i]){
            count++;
            // if(count == current){
            //     count = 0;
            // }
        } else{
            if(count<current){
                removal = removal+count;
            } else{
                removal = removal + abs(current-count);
            }
           
            current = a[i];
            count = 1;
        }
    }
    if(count<current){
        removal = removal +count;
    } else{
        removal = removal + abs(current-count);
    }
    cout<<removal<<e;

 /*
 ekhane a array k good array korte hbe
 so amra jodi array k sort kore feli then from 
 the 1st element count kori jotokhon onno kono element na ashe
 jokhon amra different kono element pabo tokhon ager 
 element ar value r counter value er difference ber korbo
 and remove korbo. evabe loop sesh hbe but last j group otar 
 remove count korar jonno looper sesh a abar ekbar difference ber
 korbo
 */   
}