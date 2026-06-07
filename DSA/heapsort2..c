#include<stdio.h>
#define MAX 100

int heap[MAX];
int heapsize = 0;

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void  heapifyup(int i){
    int parent = i/2;
    if(i<=1){
        return;
    }
    if(heap[parent]<heap[i]){
        swap(&heap[parent], &heap[i]);
        heapifyup(parent);
    }
}

void insertion(int val){
    if(heapsize==MAX-1){
        printf("Heap is full\n");
        return;
    }
    heap[++heapsize]=val;
    heapifyup(heapsize);
    printf("%d is inserted\n",val);
}

void heapifydown(int i){
    int l = 2*i;
    int r = 2*i + 1;
    int largest = i;
    if(l<=heapsize && heap[l]>heap[largest]){
        largest=l;
    } 
    if(r<=heapsize && heap[r]>heap[largest]){
        largest=r;
    }

    if(largest!=i){
        swap(&heap[largest], &heap[i]);
        heapifydown(largest);
    }
}

int extractMax(){
    if(heapsize==0){
        printf("Heap is Empty\n");
        return -1;
    }
    int max = heap[1];
    heap[1] = heap[heapsize--];
    heapifydown(1);
    return max;
}

void display(){
    if(heapsize==0){
        printf("Heap is Empty\n");
        return;
    }

    printf("Heap: ");
    for(int i=1; i<=heapsize; i++){
        printf("%d\t", heap[i]);
    }
    printf("\n");
}

void heapsort(){
    if(heapsize==0){
        printf("Heap is Empty.\n");
        return;
    }
    int temp[MAX];
    int size = heapsize;

    for(int i=1; i<=heapsize; i++){
        temp[i]=heap[i];
    }
    
    printf("Sorted Order: ");
    while(heapsize>0){
        int max = extractMax();
        printf("%d\t",max);
    }
    printf("\n");
    for(int i=0; i<=size; i++){
        heap[i]=temp[i];
    }

    heapsize=size;
}

int main(){
    insertion(5);
    insertion(9);
    insertion(12);
    insertion(8);
    int extract = extractMax();
    printf("%d is extracted.\n",extract);
    insertion(11);
    insertion(19);
    insertion(25);
    insertion(22);
    extract = extractMax();
    printf("%d is extracted.\n",extract);
    insertion(17);
    insertion(28);
    display();
    extract = extractMax();
    printf("%d is extracted.\n",extract);
    heapsort();
}