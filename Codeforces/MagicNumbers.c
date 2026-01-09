#include <stdio.h>
#include <string.h>

int main() {
    char num[1000000];
    scanf("%s", num);

    if (num[0] != '1') {
        printf("NO\n");
        return 0;
    }

    int l = strlen(num);
    int fourCount=0;
    for(int i=0; i<l; i++)
    {
        if(num[i]=='4')
        fourCount++;
        else
        fourCount=0;
        if(fourCount>2)
        {
            printf("NO\n");
            return 0;
        }
    }
    for (int i = 0; i < l; i++) {
        if (num[i] != '1' && num[i] != '4') {  
            printf("NO\n");
            return 0;
        }
    }
    
    printf("YES\n");
    return 0;
}
