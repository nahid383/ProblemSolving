#include<iostream>
#include<algorithm>
#include<vector>
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
    int maximumSubArray=0;
    int currentSubArray = 0;
    for(int i=0; i<n; i++){
        if(a[i]!=0){
            currentSubArray++;
            maximumSubArray = max(maximumSubArray,currentSubArray);
        } else if(a[i]==0){
            currentSubArray = 0;
        }

    }
    cout<<maximumSubArray<<e;


    /*jehetu ekhane maximum length of subarray ber korte bolse jader
    product 0 hbe na. so amra without any 0 array te highest 
    continous kotogula element ase seta ber korbo.
    so amra ekta current element r ekta maximum array initialize kore
    ber korte parbo j array er 2 ta 0 ba start theke next 0 er age maximum element koto ase. 
    */

}