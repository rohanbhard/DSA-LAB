#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node
{
  int info;
  node *next;
  }*start,*newptr,*save,*ptr,*rear;
  node *create_new_node(int);
  void insert_end(node *);
  void display(node*);
  void main()
  {
    start=rear=NULL;
    int inf;
    int ch=1;
    while(ch==1)
    {
      clrscr();
      printf("enter the info");
      scanf("%d",&inf);
      newptr=create_new_node(inf);
      if(newptr!=NULL)
      {
	printf("\n new node created sucessfully..press any key to continue");
	getch();
	}
      printf("\n now inserting this node in the beginning of the list ");
      insert_end(newptr);
      printf("\n the new list is \n ");
      display(start);
      printf("\n presss 1 to continue or 2 to exit");
      scanf("%d",&ch);
      }
      getch();
      }
    node * create_new_node(int n)
    {
      ptr=new node;
      ptr->info=n;
      ptr->next=NULL;
      return ptr;
      }
    void insert_end(node *np)
    {
       if(start==NULL)
       start=rear=np;
       else
       {
	rear->next=np;
	rear=np;
	}
	}
	void display(node *np)
	{
	while(np!=NULL)
	{
	  printf("%d -> ",np->info);
	  np=np->next;
	  }
	  }


