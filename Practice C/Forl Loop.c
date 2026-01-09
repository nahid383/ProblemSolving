#include<stdio.h>
int main()
{
  int i,num;
  printf("Menu Bar: \n");
  printf("1. Name\n");
  printf("2. Anything else\n");

  printf("Enter your choice: ");
  scanf("%d",&num);

  switch(num)
{
case 1:
    {
  for(i=1; i<=10; i++)
  printf("This is Nahid Hasan.\n");
    }
    break;
case 2:
    {
        for(i=1; i<=10; i++)
  printf("And he is your boss.\n");
    }
    break;
}
return 0;
}
