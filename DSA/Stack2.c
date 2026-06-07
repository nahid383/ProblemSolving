#include<stdio.h>
#define MAX 4

int stack[MAX];
int top=-1;

void push(int x){
    if(top==MAX-1){
        printf("Stack Overflow\n");
        return;
    }
    stack[++top]=x;
    printf("%d pushed to the stack\n",x);
}

void pop(){
    if(top==-1){
        printf("Stack Underflow\n");
        return;
    }
    int x = stack[top];
    stack[top--];
    printf("%d popped from the stack\n",x);
}

void peek(){
    if(top==-1){
        printf("Stack is empty.\n");
        return;
    }
    printf("%d is the top element of the stack\n",stack[top]);
}

void print(){
    int x = top;
    for(int i=0; i<=x; i++){
        printf("%d ", stack[i]);
    }
    printf("\n");
    
}

int main(){
    push(5);
    push(8);
    push(11);
    pop();
    push(14);
    peek();
    push(17);
    push(22);
    pop();
    peek();
    pop();
    push(29);
    pop();
    push(52);
    push(44);
    peek();
    print();

}