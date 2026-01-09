#include<iostream>
using namespace std;
 
int main()
{
    int row;
    cout<< "Enter No of Row: ";
    cin>>row;
  
    for(int i=1; i<=row; i+ +)
    {

        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";
           
        }
        cout<<"\n";
    }
    return 0;
}