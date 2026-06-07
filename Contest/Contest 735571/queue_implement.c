#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 10005

int main(){
    int q;
    scanf("%d",&q);
    bool isReversed = false;

    int queue[MAX];
    int front = MAX/2;
    int back = MAX/2 - 1;

    while(q--){
        char str[20];
        scanf("%s", str);

        if(strcmp(str, "reverse")==0){
            isReversed=!isReversed;
        } else if(strcmp(str, "back")==0){
            if(!isReversed){
                if(front<=back){
                    printf("%d\n",queue[back]);
                    back--;
                } else{
                    printf("No Job For Ada!\n");
                }
            } else{
                if(front<=back){
                    printf("%d\n",queue[front]);
                    front++;
                } else{
                    printf("No Job For Ada!\n");
                }
            }
        } else if(strcmp(str, "front")==0){
            if(isReversed){
                if(front<=back){
                    printf("%d\n",queue[back]);
                    back--;
                } else{
                    printf("No Job For Ada!\n");
                }
            } else{
                if(front<=back){
                    printf("%d\n",queue[front]);
                    front++;
                } else{
                    printf("No Job For Ada!\n");
                }
            }
        } else if(strcmp(str, "push_back")==0){
            int val;
            scanf("%d",&val);

            if(isReversed){
                front--;
                queue[front]=val;
            } else{
                back++;
                queue[back]=val;
            }
        } else if(strcmp(str, "toFront")==0){
            int val;
            scanf("%d", &val);

            if(isReversed){
                back++;
                queue[back]=val;
            } else{
                front--;
                queue[front]=val;
            }
        }
    }
}

