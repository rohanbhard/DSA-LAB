#include <stdio.h>
#include <stdlib.h>

Create a node
struct Node {
  int item;
  struct Node* next;
};

void insertAtBeginning(struct Node** ref, int data) {

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));


  new_node->item = data;
  new_node->next = (*ref);


  (*ref) = new_node;
}


void insertAfter(struct Node* node, int data) {
  if (node == NULL) {
    printf("the given previous node cannot be NULL");
    return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->item = data;
  new_node->next = node->next;
  node->next = new_node;
}

void insertAtEnd(struct Node** ref, int data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *ref;

  new_node->item = data;
  new_node->next = NULL;

  if (*ref == NULL) {
    *ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

void deleteNode(struct Node** ref, int key) {
  struct Node *temp = *ref, *prev;

  if (temp != NULL && temp->item == key) {
    *ref = temp->next;
    free(temp);
    return;
  }

  while (temp != NULL && temp->item != key) {
    prev = temp;
    temp = temp->next;
  }

    if (temp == NULL) return;

  prev->next = temp->next;

  free(temp);
}


void printList(struct Node* node) {
  while (node != NULL) {
    printf(" %d ", node->item);
    node = node->next;
  }
}

int main() {
  struct Node* head = NULL;

  insertAtEnd(&head, 1);
 // insertAtBeginning(&head, 2);
 // insertAtBeginning(&head, 3);
 // insertAtEnd(&head, 4);
 // insertAfter(head->next, 5);
  int choi;
  char ch='Y';
  printf("\n Enter the desired choice \n1.insertion at begining \n2.insertion at end\n3.deletion \n 4.traverse");
  scanf("%d",&choi);
  switch(choi)
  {
   case 1:
   printf("\n enter the value to be inserted");
   scanf("%d",&num);
   insertAtBeginning(&head,num);
   break;
   case 2:
   printf("\n enter the value to be inserted");
   scanf("%d",&num);
   insertAtEnd(&head,num);
   break;
   case 3:
   printf("")

  printf("Linked list: ");
  printList(head);

  printf("\nAfter deleting an element: ");
  deleteNode(&head, 3);
  printList(head);
}

