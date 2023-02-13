#include <stdio.h>
#include<stdlib.h>
int main() {
	struct node{
int data;
struct node*next;
};
int main(){
struct node*head;
struct node*second;
struct node*third;
//allocate memory for nodes in the linked list in head
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
//link first nd second nodes
head->data=7;
head->next=second;
//link second and third nodes
second->data=11;
second->next=third;
//terminate list at third
third->data=66;
third->next=NULL;
return 0;
}
}
