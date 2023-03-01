#include <stdio.h>
#include<stdlib.h>
	struct node{
int data;
struct node*next;
};
void linkedlistTraversal(struct node*ptr){
while(ptr!=NULL){
printf("Element:%d\n",ptr->data);
ptr=ptr->next;
}
}
struct node*insertatbegining(struct node*head,int data){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
ptr->next=head;
return ptr;
}
struct node*insertatend(struct node*head,int data){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
struct node*p=head;
while(p->next!=NULL){
p=p->next;
}
p->next=ptr;
ptr->next=NULL;
return head;
}
struct node*insertatindex(struct node*head,int data,int index){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
struct node*p=head;
int i=0;
while(i!=index-1){
p=p->next;
i++;
}
ptr->data=data;
ptr->next=p->next;
p->next=ptr;
return head;
}
int main(){
struct node*head;
struct node*second;
struct node*third;
struct node*four;
//allocate memory for nodes in the linked list in head
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
four=(struct node*)malloc(sizeof(struct node));
//link first nd second nodes
head->data=7;
head->next=second;
//link second and third nodes
second->data=11;
second->next=third;
//terminate list at third
third->data=66;
third->next=four;
//link third to fourth
four->data=81;
four->next=NULL;
printf("linked list before insertion\n");
linkedlistTraversal(head);
head=insertatend(head,50);
printf("\nlinked list after insertion");
linkedlistTraversal(head);
return 0;
}
