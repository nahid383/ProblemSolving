#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter all the elements of array: ");
    int a[n];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum = sum +a[i];
    }
   
    float average;

   
    

    average = (float)sum / n;

    printf("Sum = %d, Average = %.1f\n", sum, average);

    return 0;
}