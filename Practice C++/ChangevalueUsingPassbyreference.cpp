#include<iostream>
using namespace std;

void changeA(int* ptr){     //pass by reference using pointers

    *ptr = 30;
}
void changeC(int &b){       //pass by reference using alias
    b=40;
}
void changeE(int f){        //pass by value
    f = 35;
}
int main(){
    int a =10;
    changeA(&a);  
    int c = 20;
    changeC(c);
    int e = 15;
    changeE(e);
    cout<<"a="<< a<<endl;
    cout<<"c="<<c<<endl;
    cout<<"e="<<e<<endl;
} 