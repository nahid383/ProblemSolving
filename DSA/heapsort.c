#include<stdio.h>
#define MAX 100

int heap[MAX];
int heapsize = 0;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapifyup(int i){
    int parent = i/2;
    if(i <= 1) return;
    if(heap[parent] < heap[i]){
        swap(&heap[parent], &heap[i]);
        heapifyup(parent);
    }
}

void insertion(int val){
    if(heapsize == MAX-1){
        printf("Heap is Full\n");
        return;
    }
    heap[++heapsize] = val;
    heapifyup(heapsize);
    printf("%d is inserted\n", val);
}

void heapifydown(int i){
    int l = 2*i;
    int r = 2*i + 1;
    int largest = i;

    if(l <= heapsize && heap[l] > heap[largest])
        largest = l;
    if(r <= heapsize && heap[r] > heap[largest])
        largest = r;

    if(largest != i){
        swap(&heap[i], &heap[largest]);
        heapifydown(largest);
    }
}

int extractMax(){
    if(heapsize == 0){
        printf("Heap is Empty\n");
        return -1;
    }

    int max = heap[1];
    heap[1] = heap[heapsize--];
    heapifydown(1);
    return max;
}

void display(){
    printf("Heap: ");
    for(int i = 1; i <= heapsize; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

void heapSort(){
    int temp[MAX];
    int size = heapsize;

    for(int i = 1; i <= size; i++)
        temp[i] = heap[i];

    printf("Sorted order: ");
    while(heapsize > 0){
        int max = extractMax();
        printf("%d ", max);
    }
    printf("\n");

    for(int i = 1; i <= size; i++)
        heap[i] = temp[i];
    heapsize = size;
}

int main(){
    insertion(25);
    insertion(37);
    insertion(45);
    insertion(69);
    insertion(74);
    display();

    printf("%d is extracted\n", extractMax());
    display();

    heapSort();
    return 0;
}
