#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL,*temp=NULL;
int n=0;

void insbeg(){
   int value;
   printf("enter the value");
   scanf("%d",&value);
   struct node*newnode=(struct node*)malloc(sizeof(struct node));
   newnode->next=NULL;
   newnode->data=value;
   if(head==NULL){
    head=newnode;
   }
   else{
    newnode->next=head;
    head=newnode;
   }
}

void insend(){
    int v;
    printf("enter value to insert");
    scanf("%d",&v);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data=v;
     if(head==NULL){
    head=newnode;
   }
   else{
    int i;
    temp=head;
    for(i=0;temp->next!=NULL;i++){
        temp=temp->next;
    }
    temp->next = newnode;
   }

}

void inspos(){
    int p,v;
    printf("enter position to insert\n");
    scanf("%d",&p);
    printf("enter value to insert");
    scanf("%d",&v);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data=v;
    if(p<1&&head==NULL&&p>=0){
        head=newnode;
    }else if(p>0){
        temp=head;
        int i;
        for(i=0;i<p&&temp->next!=NULL;i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void print(){
    temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void delbeg (){

if(head == NULL){
    printf("empty list");
}
else{
        temp = head;
    head = head->next;
free(temp);

}




}


void delend(){


temp = head;
        for (int i = 0; temp->next->next != NULL; i++) {
            temp = temp->next;
        }

temp->next = NULL;


}

void delpos(){

int p, e;
    printf("enter position to insert\n");
    scanf("%d", &p);
    if(p<1&&head==NULL&&p>=0){
         printf("empty list");
    }
    else {
        temp=head;
        int i;
        for(i=0;i<p-1&&temp->next!=NULL;i++){
            temp=temp->next;
        }

        temp->next=temp->next->next;


    }





}



int main(){
    int u;
    while(1){
        printf("choose an option\n");
        printf("1.insbeg\n");
        printf("2.insend\n");
        printf("3.inspos\n");
        printf("4.delbeg\n");
        printf("5.delend\n");
        printf("6.delpos\n");
        printf("7.exit\n");
        scanf("%d",&u);
        switch(u){
            case 1:
                insbeg();
                print();
                break;
            case 2:
                insend();
                print();
                break;
            case 3:
                inspos();
                print();
                break;
                case 4:
                delbeg();
                print();
                break;
            case 5:
                delend();
                print();
                break;
            case 6:
                delpos();
                print();
                break;


            case 7:
                return 0;
        }
    }
}

