#include<stdio.h>
int main()
{
    int n; 
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter all the elemnet of the array: ");
    int a[n];
    int odd=0; 
    int even =0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even++;
        else if(a[i]%2!=0)
        odd++;

    }
    printf("Even = %d, Odd = %d",even,odd);
  

}