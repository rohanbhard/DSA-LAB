#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node{
  int info;
  node *next;
  }*start,*newptr,*num,*rear;
node* create_new_node(int);
void insert_end(node *);
void display(node *);
void reverse(node *);
void main()
{
  start=rear=NULL;
  int inf;
  int ch=1;
  do
  { clrscr();
    printf("\n enter information fro the new node ");
    scanf("%d",&inf);
    newptr=create_new_node(inf);
    printf("\n now inserting the node in the end of the list");
    insert_end(newptr);
    printf("\n want to add more nodes enter y fro more");
    scanf("%d",&ch);
    display(start);
    }while(ch);
   printf("\n now reversing the string ");
   reverse(start);
   display(start);
   getch();

  }
  node *create_new_node(int n)
  {
    num=new node();
    num->info=n;
    num->next=NULL;
    return num;
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
   void display(node * np)
   {
     while( np!=NULL)
     {
       printf("%d  -> ",np->info);
       np=np->next;
       }
    printf("\n ");
    }
   void reverse(node *np)
   {
     node *cur,*prev,*ptr;
     if(np->next==NULL) return;
     cur=np;
     prev=cur->next;
     cur->next=NULL;
     while(prev->next!=NULL)
     {
       ptr=prev->next;
       prev->next=cur;
       cur=prev;
       prev=ptr;
       }
       prev->next=cur;
       start=prev;
       }


