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
int maximumColumnSum(int matrix[][4], int row, int column){
    int maxiSum = INT32_MIN;
    for(int i=0; i<column; i++){
        int colSum = 0;
        for(int j=0; j<row; j++){
            colSum+=matrix[j][i];
        }

        maxiSum = max(maxiSum, colSum);
    }

    return maxiSum;
}
int outputMatrix(int matrix[][4], int row, int column){
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int inputMatrix(int matrix[][4], int row, int column){
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>matrix[i][j];
        }
    }
     outputMatrix(matrix, row, column);
}


int main(){
    int matrix[3][4];
    int row = 3;
    int column = 4;
    cout<<"Enter all the element of the matrix: ";
    inputMatrix(matrix, row, column);
    cout<<maximumColumnSum(matrix, row, column);
}