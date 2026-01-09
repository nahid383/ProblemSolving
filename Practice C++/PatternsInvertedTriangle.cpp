#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number of Rows: ";
    int row;
    cin>>row;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<row-i; j++)
        {
            cout<<i+1<<"";
        }
        cout<<endl;
    }
}