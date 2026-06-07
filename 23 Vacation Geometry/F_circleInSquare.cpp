#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
#define pi 2*acos(0)
int main(){
    int t;
    cin>>t;
            int serial = 1;
    while(t--){

        double r;
        cin>>r;
        double square = (2*r)*(2*r);
        double circle = pi*r*r;

        double blueShaded = square - circle;
        
        cout << fixed << setprecision(2);
        cout<<"Case "<<serial<<": "<<blueShaded<<endl;
        serial++;
    }
}