#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}
int deque(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This queue is Empty\n");
    } else{
        q->f++;
        a = q->arr[q->f];
        return a;
    }
}
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("\nThis queue is Full\n");
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
    // if(isEmpty(q)){
    //     printf("This Queue is Empty.\n");
    // }
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
    
    
    free(q->arr);
    free(q);
    return 0;

}