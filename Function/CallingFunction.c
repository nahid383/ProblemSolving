#include<stdio.h>
void bangladesh()
{
    printf("Oh, I am Bangladeshi.\n");
    return;
}
void southafrica()
{
    printf("You are Protia\n");
    bangladesh();
    return;
}
void australia()
{
    printf("You are Austarlian\n");
    southafrica();
    return;
}
void india()
{
    printf("You are Indian\n");
    australia();
    return;
}
int main() 
{
    india();
    return 0;
}