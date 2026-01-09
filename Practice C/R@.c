//Revising
#include<stdio.h>
int main()
{
int num1,num2,temp;
printf("Enter value of both: ");
scanf("%d%d",&num1,&num2);

temp=num1;
num1=num2;

num2=temp;

printf("num1= %d",num1);
printf("num2= %d",num2);

}


