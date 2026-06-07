#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#define e endl
#define ll long long
using namespace std;
int main(){
    int n; 
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<string> name(n);

    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i]>>name[i];
    }

    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int stroe;
        for(int i=0; i<n; i++){
            if(a[i]==x && b[i]==y){
                stroe=i;
            }
        }

        cout<<name[stroe]<<e;
    }
}

/*
ekhane 1st a tw kar jonno ki code word sheta  input niye nilam
then testcase er input x and y er sathe jetar a and b match korbe otar
name ta just print kore dibo
ejonno array r string ta vectorer madhome input nite hbe because
ekahne multiple name store korte hbe
*/