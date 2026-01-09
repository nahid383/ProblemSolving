#include<iostream>
using namespace std;
 
int main()
{
    int row, col;
    cout<< "Enter No of Row and Column: ";
    cin>>row>>col;
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}