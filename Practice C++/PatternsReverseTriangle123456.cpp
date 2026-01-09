#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number of Rows: ";
    int row;
    cin>>row;
    int count =1; 
    for(int i=1; i<=row; i++)
    {
        for(int j=i; j>=1; j--)
        {
            cout<<count<<" ";
            count++;
           
        }
        cout<<endl;
    }
}