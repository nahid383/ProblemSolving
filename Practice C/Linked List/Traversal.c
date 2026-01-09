#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node*ptr){
    printf("Element is linked List: \n");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;

    // memory allocation for nodes
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));

    //link head and second
    head->data = 5;
    head->next = second;
    //link second and third
    second->data = 11;
    second->next = third;
    //link third and fourth
    third->data=17;
    third->next=fourth;
    //terminate the list
    fourth->data=23;
    fourth->next=NULL;

    linkedListTraversal(head);

}
