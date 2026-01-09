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
    int k;
    cin>>k;
    string s;
    cin>>s;
    int n = s.length();
    int freq[26]={0};
    for(int i=0; i<n; i++){
        freq[s[i]-'a']++;
    }
    bool onel = true;
    bool isKstring = true;
    for(int i=0; i<26; i++){
        if(freq[i]%k!=0){
            isKstring = false;
            break;
        }
    }
    // for(int i=0; i<n-1; i++){
    //      if(s[i]!=s[i+1]){
    //         onel = false;
    //         break;
    //     }
    // }
    // if(onel){
    //     cout<<s<<e;
    //     return 0;
    // }
    if(!isKstring){
        cout<<"-1"<<e;
        return 0;
    }  
    string part ="";

    for(int i=0; i<26; i++){
        int time = freq[i]/k;
        for(int j=0; j<time; j++){
            part+=char(i+'a');
        }
    }

    for(int i=0; i<k; i++){
        cout<<part;
    }
    cout<<e;
}