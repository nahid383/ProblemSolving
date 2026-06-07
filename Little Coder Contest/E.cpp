#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#define e endl
#define ll long long
using namespace std;

int main(){
    double n;
    cin>>n;
    double maxima = 0;
    vector<double> a(n);
    map<double, double> freq;
    for(double i=0; i<n; i++){
        cin>>a[i];
        freq[a[i]]++;
        maxima = max(maxima, freq[a[i]]);
    }
    cout<<maxima<<e;
}

/*
ekhane sorbonimno box koyta show korbe ta ber korte hbe
sortoonujayi jodi array er highest freq wala number er freq ber 
kori taholey answer pabo
mapping er madhome kotogulo alada element ache ta ber kora jay
alada element gulo ber kore tar freq ber korte hbe taholey answer pabo

*/