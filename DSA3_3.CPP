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
void main()
{
   int inf;
   int ch=1,choi,num=1;
  do
  {
   printf("\n 1.Insertion at head \n 2.insertion at tail\n 3.display forward \n 4.display reversal");
   scanf("%d",&choi);
   switch(choi)
   {
       case 1:
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
     break;
      case 2:
       do
    {
     clrscr();
     printf("\n enter the info of the node");
     scanf("%d",&inf);
     printf("\n now inserting the elements in the start");
     InsertAtTail(inf);
     printf("\n wantt to add more elements ");
     scanf("%d",&ch);
     }while(ch);
     break;
     case 3:

     printf("\n the list in forward direction is ");
     Print();
     break;
     case 4:
     printf("\n the list in backward direction is");
     ReversePrint();
     break;
     Default :
     printf("\n wrong choice ");
     getch();
   }

   printf("\n enter 1 to go to main menu");
   scanf("%d",&num);
   }while(num);
getch();
}