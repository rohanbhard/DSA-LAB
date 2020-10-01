#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;
struct Node* GetNewNode(int x) {
struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void InsertAtHead(int x) {
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}


void InsertAtTail(int x) {
	struct Node* temp = head;
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
}


void Print() {
	struct Node* temp = head;
	printf("Forward: ");
	while(temp != NULL) {
		printf("%d -> ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}


void ReversePrint() {
	struct Node* temp = head;
	if(temp == NULL) return;
		while(temp->next != NULL) {
		temp = temp->next;
	}
		printf("Reverse: ");
	while(temp != NULL) {
		printf("%d -> ",temp->data);
		temp = temp->prev;
	}
	printf("\n");
}
void main(									 )
{
   int inf;
   int ch=1;
   do
   {
     clrscr();
     printf("\n enter the info of the node");
     scanf("%d",&inf);
     printf("\n now inserting the elements in the start");
     InsertAtHead(inf);
     printf("\n wantt to add more elements ");
     scanf("%d",&ch);
     }while(ch);
     clrscr();
     printf("\n the list in forward direction is ");
     Print();
     printf("\n the list in backward direction is");
     ReversePrint();
     getch();
   }