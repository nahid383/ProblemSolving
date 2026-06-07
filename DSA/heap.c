#include <stdio.h>
#define MAX 100

int heap[MAX];
int heapSize = 0;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void heapifyUp(int i) {
    int parent = i / 2;
    if (i <= 1) return;
    if (heap[parent] < heap[i]) {
        swap(&heap[parent], &heap[i]);
        heapifyUp(parent);
    }
}

void heapifyDown(int i) {
    int left = 2 * i;
    int right = 2 * i + 1;
    int largest = i;

    if (left <= heapSize && heap[left] > heap[largest])
        largest = left;
    if (right <= heapSize && heap[right] > heap[largest])
        largest = right;

    if (largest != i) {
        swap(&heap[i], &heap[largest]);
        heapifyDown(largest);
    }
}

void insert(int val) {
    if (heapSize >= MAX - 1) {
        printf("Heap is full!\n");
        return;
    }
    heap[++heapSize] = val;
    heapifyUp(heapSize);
    printf("%d inserted.\n", val);
}

int extractMax() {
    if (heapSize == 0) {
        printf("Heap is empty!\n");
        return -1;
    }
    int max = heap[1];
    heap[1] = heap[heapSize--];
    heapifyDown(1);
    return max;
}

void display() {
    printf("Heap: ");
    for (int i = 1; i <= heapSize; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

int main() {
    insert(40);
    insert(20);
    insert(60);
    insert(10);
    insert(50);
    display();

    printf("Extracted max: %d\n", extractMax());
    display();

    return 0;
}
