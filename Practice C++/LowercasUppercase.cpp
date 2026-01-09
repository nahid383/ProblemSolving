#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any character: "<<endl;
    char ch;
    cin>>ch;
    if(ch>='a'&&ch<='z')
    {
        cout<<"Lowercase.\n";
    }
    else if(ch>='A'&&ch<='Z')
    {
        cout<<"Uppercase.\n";
    }
    else
    {
        cout<<"Special Character.\n";
    }
    return 0; 
}