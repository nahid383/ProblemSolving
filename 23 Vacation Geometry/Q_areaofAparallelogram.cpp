#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int t;
    cin>>t;
    int serial =1;
    while(t--){
        int Ax, Ay, Bx, By, Cx, Cy;
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;

        int Dx = Bx+Cy-Ax;
        int Dy = By+Cy-Ay;

        int area = abs((Bx-Ax)*(Dy-Ay)-(By-Ay)*(Dx-Ax));
        cout<<"Case "<<serial<<": "<<Dx<<" "<<Dy<<" "<<area<<endl;
        serial++;
    }
}