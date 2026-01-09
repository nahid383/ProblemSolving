#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int main(){
    struct queue *q;
    q->size = 10;
    q->f=-1;
    q->r=-1;
    q->arr = (int*)malloc(q->size*sizeof(int));

    printf("Queue Created Successfully\n");
    return 0;

}