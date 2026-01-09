#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node* top) {
    return top == NULL;
}

int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack Underflow\n");
        return -1;  // Return a sentinel value to indicate stack is empty
    } else {
        struct Node* temp = *top;
        *top = (*top)->next;
        int poppedValue = temp->data;
        free(temp);  // Free memory
        return poppedValue;
    }
}

struct Node* push(struct Node* top, int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return top;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    return top;
}

int main() {
    struct Node* top = NULL;

    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);

    printf("Stack after pushes:\n");
    linkedListTraversal(top);

    printf("Popped element: %d\n", pop(&top));

    printf("Stack after pop:\n");
    linkedListTraversal(top);

    return 0;
}
