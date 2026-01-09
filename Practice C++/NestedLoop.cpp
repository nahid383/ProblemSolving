#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter no. of row and column: ";
    int t,u;
    cin>>t>>u;
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<u; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}