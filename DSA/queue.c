#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1) {
        printf("Queue Overflow!\n");
        return;
    }
    if (front == -1) front = 0; // first element
    queue[++rear] = x;
    printf("%d enqueued to queue.\n", x);
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
        return;
    }
    printf("%d dequeued from queue.\n", queue[front++]);
}

void peek() {
    if (front == -1 || front > rear)
        printf("Queue is empty.\n");
    else
        printf("Front element: %d\n", queue[front]);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    peek();
    dequeue();
    peek();
    return 0;
}
