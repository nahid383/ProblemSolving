#include<stdio.h>
#include<string.h>
int main()

{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int n;
        scanf("%d",&n);
    char array1[n + 1], array2[n + 1];
        scanf("%s", array1);
        scanf("%s", array2);
            for (int i = 0; i < n; i++) {
            if (array1[i] == 'G') array1[i] = 'B';
            if (array2[i] == 'G') array2[i] = 'B';
        }

            if(strcmp(array1, array2)==0)
                    printf("Yes\n");
                        else
                        printf("No\n");
    }
    return 0;
}
