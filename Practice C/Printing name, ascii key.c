//This is revising program

#include<stdio.h>
int main()
{
    int num;
        char name1[20];
        char name2[20];
        char name3[20];
        char lower;
        int i;
        float f;
        double d;
        char c;
        int num2;


    printf("Please enter any number: ");
    scanf("%d",&num);
        printf("Please enter your name : ");
    scanf("%s",&name1);
    printf("Enter fathers name : ");
    scanf("%s",&name2);
    printf("Enter mothers name : ");
    scanf("%s",&name3);
    printf("Enters ASCII Number :");
    scanf("%d", &num2);
    printf("Enter any lowercase letter: ");
    scanf("%c",&lower);

    printf("You have entered: %d\n",num);
    printf("My name is : %s\n",name1);
    printf("My fathers name is : %s\n",name2);
    printf("My mothers name is : %s\n",name3);
    printf("Size of integer is : %d bytes\n",sizeof(i));
    printf("Size of float is : %d bytes\n",sizeof(f));
    printf("Size of double is : %d bytes\n",sizeof(d));
    printf("Size of character is : %d bytes\n", sizeof(c));
    printf("Your ASCII letters is : %c\n", num2);
    printf("Your uppercase letter is : %c\n",lower-32);
        return 0;
}
