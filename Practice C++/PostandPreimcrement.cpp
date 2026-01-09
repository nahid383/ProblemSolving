#include<iostream>
using namespace std;
int main()
{
    int a = 17;
    int b = a++;
    cout<<"b = "<<b<<endl;
    cout<<"a = "<<a<<endl;

    int c = 19;
    int d = ++c;
    cout<<"d = "<<d<<endl;
    cout<<"c = "<<c<<endl;
}