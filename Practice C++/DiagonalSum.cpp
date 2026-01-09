#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define e endl
#define MAX 100
#define ll long long
using namespace std; 

int diagonalSum(int a[][100], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        // for(int j=0; j<n; j++){ // less efficient
        //     if(i==j){
        //         sum+=a[i][j];
        //     } else  if(i+j==n-1){
        //         sum+=a[i][j];
        //     }
        // }

        sum+=a[i][i];   // more efficient
        if(i!=n-i-1){
            sum+=a[i][n-i-1];
        }
    }
    return sum;
}
int main(){
    cout<<"Enter no of rows and column: ";
    int n;
    cin>>n;
    int a[MAX][MAX];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    cout<<"Matrix"<<e;
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<diagonalSum(a, n)<<e;

    
}