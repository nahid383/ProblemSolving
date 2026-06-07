#include<stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int x){
    if(rear==MAX-1){
        printf("Queue Overflow\n");
        return;
    }

    if(front==-1){
        front=0;
    }
    queue[++rear]=x;
    printf("%d enqueued to the queue\n", x);
}

void dequeue(){
    if(front==-1 || front>rear){
        printf("Queue Underflow\n");
        return;
    }
    printf("%d is dequeued from the queue\n", queue[front++]);
}

void peek(){
    if(front==-1 || front>rear){
        printf("Queue is Empty.\n");
        return;
    }
    printf("%d is the front element.\n",queue[front]);
}

void print(){
    printf("The queue is: ");
    for(int i=front; i<=rear; i++){
        printf("%d ", queue[i]);
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