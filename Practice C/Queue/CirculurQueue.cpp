#include<stdio.h>
#include<stdlib.h>

struct circulurQueue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circulurQueue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct circulurQueue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}
int deque(struct circulurQueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This queue is Empty\n");
    } else{
        q->f = (q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}
void enqueue(struct circulurQueue *q, int val){
    if(isFull(q)){
        printf("\nThis queue is Full\n");
    } else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("%d ",q->arr[q->r]);
    }
}

int main(){
    struct circulurQueue *q = (struct circulurQueue *)malloc(sizeof(struct circulurQueue));
    q->size = 10;
    q->f=0;
    q->r=0;
    q->arr = (int*)malloc(q->size*sizeof(int));

    printf("All Element is the queue: \n");
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
    enqueue(q, 20);
    
    printf("\nDequeued Element is %d\n",deque(q));
    printf("Dequeued Element is %d\n",deque(q));
    printf("Dequeued Element is %d\n",deque(q));
    printf("Dequeued Element is %d\n",deque(q));
    printf("Dequeued Element is %d\n",deque(q));
    printf("Dequeued Element is %d\n",deque(q));
    printf("Dequeued Element is %d\n",deque(q));
    printf("Dequeued Element is %d\n",deque(q));
    printf("Dequeued Element is %d\n",deque(q));
    printf("Dequeued Element is %d\n",deque(q));
    printf("Dequeued Element is %d\n",deque(q));
    enqueue(q, 20);
    
    free(q->arr);
    free(q);
    return 0;

}