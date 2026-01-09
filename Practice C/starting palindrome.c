#include <stdio.h>
#include <math.h>
int main()
{
int temp, remainder, i, total = 0, startingNumber, endingNumber;
printf("Enter the starting point for checking palindrome number : \n");
scanf("%d", &startingNumber);
printf("Enter the ending point for checking palindrome number : \n");
scanf("%d", endingNumber);
for (i = startingNumber; i <= endingNumber; i++)

{

int reverseOfNumber = 0;
i = abs(i);
temp = i;
while (temp != 0)

    {

remainder = temp % 10;
reverseOfNumber = (reverseOfNumber * 10) + remainder;
temp /= 10;

    }

if (i == reverseOfNumber)

    {

printf("%d\n", i);
total++;

    }

}

printf("\nTHE TOTAL PALINDROME NUMBERS FROM(%d to %d) = %d\n", startingNumber, endingNumber, total);
getchar();
}
