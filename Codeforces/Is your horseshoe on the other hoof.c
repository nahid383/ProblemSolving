#include<stdio.h>
int main()
{
 int s1,s2,s3,s4;
scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
int horseshoes[4]={s1,s2,s3,s4};
int  unique_colors=0;
for (int i = 0; i < 4; i++) {
    int is_unique = 1;
    for (int j = 0; j < i; j++) {
        if (horseshoes[i] == horseshoes[j]) {
            is_unique = 0;
            break;
        }
    }
    if (is_unique) {
        unique_colors++;
    }
}

// Calculate the minimum number of horseshoes Valera needs to buy
int min_to_buy = 4 - unique_colors;

printf("%d\n", min_to_buy);

return 0;
}
