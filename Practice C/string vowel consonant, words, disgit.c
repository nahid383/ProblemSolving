#include<stdio.h>
int main()
{
    char string[100],ch;
        int vowel, consonant, words, digit,i,others,small,capital;
    printf("Enter any string: ");
gets(string);

    i=vowel=consonant=small=capital=words=digit=others=0;

    while((ch = string[i]) != '\0')
    {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowel++;
            else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
                consonant++;
            else if(ch>='0' && ch<='9')
                digit++;
            else if(ch == ' ')
            words++;
            else if(ch>='a' && ch<='z')
                    small++;
                    else if(ch>='A' && ch<='Z')
                            capital++;
            else
                others++;
            i++;
    }
    words++;


    printf("\nNumber of vowel: %d",vowel);
    printf("\nNumber of consonant: %d",consonant);
    printf("\nNumber of digit: %d",digit);
    printf("\nNumber of words: %d",words);
    printf("\nNumber of other: %d",others);
       printf("\nNumber of small letter: %d",small);
          printf("\nNumber of capital letter: %d",capital);
    }
