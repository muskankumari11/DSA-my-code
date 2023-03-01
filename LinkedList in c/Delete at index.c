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
//case1:deleting the first element from linked list
struct node*deletefirst(struct node*head){
struct node*ptr=head;
head=head->next;
free(ptr);
return head;
}
// case 2:deleting an element at given index from linkedlist
struct node*deleteatindex(struct node*head,int index){
struct node*p=head;
struct node*q=head->next;
for(int i=0;i<index-1;i++){
p=p->next;
q=q->next;
}
p->next=q->next;
free(q);
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
head->data=4;
head->next=second;
//link second and third nodes
second->data=3;
second->next=third;
//terminate list at third
third->data=8;
third->next=four;
//link third to fourth
four->data=1;
four->next=NULL;
printf("linked list before deletion ");
linkedlistTraversal(head);
head=deleteatindex(head,2);
printf("linked list after deletion");
linkedlistTraversal(head);
return 0;
}
