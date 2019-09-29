/*
 * Impementing Singly Linked List..
 * */
 
#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
	
};
typedef struct node NODE;

int returnElement()
{	int i;
	printf("Enter the element\n");
	scanf("%d",&i);
	return i;
}

NODE *insert_at_empty(NODE *start,int i)
{
	NODE *temp=(NODE *)malloc(sizeof(NODE));
	
	start=temp;
	temp->data=i;
	temp->next=NULL;
	return start;
}

NODE *insert_at_begining(NODE *start,int i)
{
	NODE *temp=(NODE *)malloc(sizeof(NODE));
	temp->data=i;
	temp->next=start;
	start=temp;
	return start;
}

NODE *insert_at_position(NODE *start,int i,int pos)
{
	NODE *temp=(NODE *)malloc(sizeof(NODE));
	NODE *p=start;
	temp->data=i;
	
	while(p->data!=pos)
	{
		p=p->next;
	}
	
	temp->next=p->next;
	p->next=temp;
	
	return start;
	
}

NODE *insert_at_last(NODE *start,int i)
{
	NODE *temp=(NODE *)malloc(sizeof(NODE));
	NODE *p=start;
	temp->data=i;
	temp->next=NULL;
	
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=temp;
	return start;
}

void display(NODE *start)
{
	NODE *p;
	if(start==NULL)
	{
		printf("List is empty\n");
	}
	p=start;
	printf("The list is:");
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
NODE *del_first_node(NODE *start)
{
	NODE *p;
	if(start==NULL)
		printf("List is already empty\n");
	p=start;
	start=p->next;
	free(p);
	return start;
}
NODE *del_last_node(NODE *start)
{
	NODE *p=start;
	while(p->next->next!=NULL)
		p=p->next;
	free(p->next);
	p->next=NULL;
	return start;
	
}
NODE *del_given_node(NODE *start,int Node)
{
	NODE *p=start,*t;
	while(p->next->data!=Node)
		p=p->next;
	t=p->next;
	p->next=t->next;
	free(t);
	return start;
}

int main()
{
	int choice;
	int i;
	int pos,Node;
	NODE *start=NULL;
	
	
	while(1){
	printf("[1]--Insert Element in The Empty List\n[2]--Insert Element in the Begining of the list\n");
	printf("[3]--Insert Element at given position\n[4]--Insert Element in the last of the list\n");
	printf("[5]--Delete from the begining\n[6]--Delete Element from the last of the list\n");
	printf("[7]--Delete Element from given position\n[8]--Display Elements\n");
	printf("[9]--Exit from the program\n");
	
	printf("Enter Your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
				i=returnElement();
				start=insert_at_empty(start,i);
		break;
		case 2:
				i=returnElement();
				start=insert_at_begining(start,i);
		break;
		case 3:
				i=returnElement();
				printf("Enter the position\n");
				scanf("%d",&pos);
				start=insert_at_position(start,i,pos);
		break;
		case 4:
				i=returnElement();
				start=insert_at_last(start,i);
		break;
		case 5:
				start=del_first_node(start);
		break;
		case 6:
				start=del_last_node(start);
		break;
		case 7:	printf("Enter the NodeData which you wish to delete");
				scanf("%d",&Node);
				start=del_given_node(start,Node);
		break;
		case 8:
				display(start);
				printf("\n");
		break;	
		case 9:
				exit(0);
		break;
		}

	}
}
