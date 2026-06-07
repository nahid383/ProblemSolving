#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(y%x!=0)
    {
        int rem = y%x;
        cout<<x-rem<<endl;
    }
    else
    cout<<"0"<<endl;

    return 0; 
}