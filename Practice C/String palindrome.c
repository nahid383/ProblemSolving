 #include<stdio.h>

int main()
{
  char str[50];
    char str2[50];
    printf("Enter your string: ");
    gets(str);
        int i=0, len=0 ,j;
    while(str[i]!='\0')
    {
        i++;
        len++;
    }
    printf("\n String Length: %d \n",len);

    for(j=0, i=len-1; i>=0; i--, j++)
    {
        str2[j]=str[i];
    }
    str2[j]= '\0';
printf("Reverse string: %s",str2);

printf("\n\n");
   int d= strcmp(str,str2);
    if(d==0)
        printf("String is palindrome.");
    else
        printf("String is not palindrome.");

}
