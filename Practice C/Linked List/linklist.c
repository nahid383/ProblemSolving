#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};

void listTraversal(struct Node*ptr){
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
    struct Node*fifth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));

    head->data = 2;
    head->next=second;

    second->data=4;
    second->next=third;

    third->data=6;
    third->next=fourth;

    fourth->data=8;
    fourth->next=fifth;

    fifth->data=9;
    fifth->next=NULL;

    listTraversal(head);
}
