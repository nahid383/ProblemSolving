#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    //allocating memory for nodes
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    // link 1st and 2nd nodes
    head->data=7;
    head->next = second;

    //link 2nd and 3rd nodes
    second->data=11;
    second->next=third;

    //terminate the list at the 3rd nodes
    third->data=12;
    third->data=NULL;

}
