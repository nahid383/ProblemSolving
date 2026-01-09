#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This queue is Full\n");
    } else{
        q->r++;
        q->arr[q->r]=val;
        printf("%d ",q->arr[q->r]);
    }
}

int main(){
    struct queue *q;
    q->size = 10;
    q->f=-1;
    q->r=-1;
    q->arr = (int*)malloc(q->size*sizeof(int));

    enqueue(q, 10);
    enqueue(q, 12);
    enqueue(q, 15);
    enqueue(q, 17);
    enqueue(q, 19);
    enqueue(q, 16);
    enqueue(q, 11);
    enqueue(q, 13);
    enqueue(q, 14);
    enqueue(q, 18);
    

    free(q->arr);
    free(q);
    return 0;

}