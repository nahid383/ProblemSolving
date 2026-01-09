#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define e endl
#define ll long long
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count1[26] = {0};
        int count2[26] = {0};
        for(int i=0; i<n; i++){
            count2[s[i]-'a']++;
        }
        bool found = false;

        for(int i=0; i<n; i++){
            int index = s[i] - 'a';

            count2[index]--;

            if(i>0 && i<n-1){
                if(count1[index]>0 || count2[index]>0){
                    found = true;
                    break;
                }
            }
            count1[index]++;
        }

        if(found){
            yes;
        } else{
            no;
        }
    }
}