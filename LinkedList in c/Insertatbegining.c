//insert a node at begining in linkedlist
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
ptr->next=head;
ptr->data=data;
return ptr;
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
linkedlistTraversal(head);
head=insertatbegining(head,56);
linkedlistTraversal(head);
return 0;
}
