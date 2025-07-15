#include<stdio.h>
#include<stdlib.h>>

struct node{
int data;
struct node*next;
};

int main(){
struct node *head,*second;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));


head->data=29;
head->next=second;

second->data=33;
second->next=NULL
;

struct node*curr=head;
printf("linked list..");
while(curr!=NULL){
    printf("%d->",curr->data);
    curr=curr->next;
}

free(head);
free(second);
return 0;
}
