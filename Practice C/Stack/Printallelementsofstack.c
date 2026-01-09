#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    } else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    } else{
        return 0;
    }
}

void push(struct stack *ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow");
    } else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int peek(struct stack *ptr, int i){
    int arrayInd = ptr->top-i+1;

    if(arrayInd<0){
        printf("Not a valid position for the stack\n");
        return -1;
    } else{
        return ptr->arr[arrayInd];
    }
}

int main(){
    
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *) malloc(s->size*sizeof(int));

    printf("Stack has been created SuccesfullY\n");
    printf("Pushed Elements: \n");
    push(s,17);
    push(s,18);
    push(s,19);
    push(s,20);
    push(s,21);
    push(s,22);
    push(s,23);
    push(s,24);
    push(s,25);
    push(s,26);
    

    for(int j=0; j<s->top+1; j++){
        printf("The value at index %d is %d\n",j,peek(s,j+1));
    }

    free(s->arr);
    free(s);
}