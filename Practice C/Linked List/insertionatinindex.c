#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node*ptr){
    printf("Elements are: ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

//case-3
struct Node * insertAtindex(struct Node *head, int data,int index){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next = p->next;
    p->next=ptr;
    return head;
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

    head->data=3;
    head->next=second;

    second->data=5;
    second->next=third;

    third->data=7;
    third->next=fourth;

    fourth->data=9;
    fourth->next=fifth;

    fifth->data=11;
    fifth->next=NULL;

    traversal(head);
    head=insertAtindex(head, 6, 4);
    traversal(head);
    
}