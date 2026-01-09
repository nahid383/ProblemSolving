#include <stdio.h>
#include <stdlib.h>

struct queue {
    int size;
    int f;
    int r;
    char **arr;
};

int isEmpty(struct queue *q) {
    if (q->r == q->f) {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q) {
    if (q->r == q->size - 1) {
        return 1;
    }
    return 0;
}

char* deque(struct queue *q) {
    char* a = NULL;
    if (isEmpty(q)) {
        printf("This queue is Empty\n");
    } else {
        q->f++;
        a = q->arr[q->f];
        return a;
    }
    return NULL;
}

void enqueue(struct queue *q, char* val) {
    if (isFull(q)) {
        printf("\nThis queue is Full\n");
    } else {
        q->r++;
        q->arr[q->r] = val;
        printf("%s ", q->arr[q->r]);
    }
}

void printQueue(struct queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        for (int i = q->f + 1; i <= q->r; i++) {
            printf("%s ", q->arr[i]);
        }
    }
    printf("\n");
}

int main() {
    struct queue *q = (struct queue*)malloc(sizeof(struct queue));
    q->size = 6;
    q->f = 0;
    q->r = 0;
    q->arr = (char**)malloc(q->size * sizeof(char*));

    q->arr[1] = "London";
    q->arr[2] = "Berlin";
    q->arr[3] = "Rome";
    q->arr[4] = "Paris";

    q->r = 4;

    printf("Initial Queue: \n");
    printQueue(q);


    printf("Operation 1: \n");
    enqueue(q, "Athens");
    printf("\nUpdated Queue: \n");
    printQueue(q);

    printf("Operation 2: \n");
    enqueue(q, "Madrid");
    printf("\nUpdated Queue: \n");
    printQueue(q);

    printf("Operation 3: \n");
    enqueue(q, "Moscow");
    printf("\nUpdated Queue: \n");
    printQueue(q);

    printf("Operation 4: \n");
    deque(q);
    printf("\nUpdated Queue: \n");
    printQueue(q);


    deque(q);
    printf("\nUpdated Queue: \n");
    printQueue(q);

    printf("Operation 5: \n");  
    enqueue(q, "Oslo");
    printf("\nUpdated Queue: \n");
    printQueue(q);

    printf("Operation 6: \n");
    deque(q);
    printf("\nUpdated Queue: \n");
    printQueue(q);

    deque(q);
    printf("\nUpdated Queue: \n");
    printQueue(q);

    deque(q);
    printf("\nUpdated Queue: \n");
    printQueue(q);

    deque(q);
    printf("\nUpdated Queue: \n");
    printQueue(q);

    deque(q);
    printf("\nUpdated Queue: \n");
    printQueue(q);

    deque(q);
    printf("\nUpdated Queue: \n");
    printQueue(q);


    free(q->arr);
    free(q);

    return 0;
}
