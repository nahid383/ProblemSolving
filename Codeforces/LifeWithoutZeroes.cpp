#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define e endl
#define ll long long
using namespace std; 
int main(){
    string a,b;
    cin>>a>>b;

    int num1 = stoi(a);
    int num2 = stoi(b);

    int sum = num1+num2;

    string c = to_string(sum);

    string d = "";

    for(char ch : c){
        if(ch!='0'){
            d = d+ch;
        }
    }

    string g="",f="";

     for(char ch : a){
        if(ch!='0'){
            g = g+ch;
        }
    }

    
    for(char ch : b){
        if(ch!='0'){
            f = f+ch;
        }
    }


    num1 = stoi(g);
    num2 = stoi(f);
    int sum0 =  num1+num2;
    string iS = to_string(sum0);



    if(iS==d){
        yes;
    } else{
        no;
    }
}