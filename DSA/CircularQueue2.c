#include<stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isEmpty(){
    return (front==-1);
}

int isFull(){
    return (front==(rear+1)%MAX);
}

void enqueue(int x){
    if(isFull()){
        printf("Queue Overflow\n");
        return;
    }

    if(isEmpty()){
        front=0;
        rear=0;
    } else{
        rear=(rear+1)%MAX;
    }

    queue[rear]=x;
    printf("%d is enqueued to the queue\n", x);
}

void dequeue(){
    if(isEmpty()){
        printf("Queue Underflow\n");
        return;
    }
    printf("%d is dequeued from the queue\n", queue[front]);

    if(front==rear){
        front=-1;
        rear=-1;
    } else{
        front = (front+1)%MAX;
    }


}

void peek(){
    if(isEmpty()){
        printf("Queue isEmpty\n");
        return;
    }

    printf("%d is the front element\n",queue[front]);
}

void print(){
    if(isEmpty()){
        printf("Queue isEmpty\n");
        return;
    }

    printf("Queue is: ");
    int i=front;
    while(1){
        printf("%d ",queue[i]);
        if(i==rear) 
        break;
        i=(i+1)%MAX;
    }
    printf("\n");
}
int main(){
    peek();
    enqueue(12);
    enqueue(17);
    enqueue(19);
    dequeue();
    enqueue(22);
    enqueue(29);
    peek();
    dequeue();
    peek();
    enqueue(36);
    enqueue(42);
    print();
    enqueue(49);
    dequeue();
    enqueue(52);
    peek();
    enqueue(61);
    print();

}