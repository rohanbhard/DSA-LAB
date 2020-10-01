#include<stdio.h>
#include<conio.h>

void ins(int a[],int x,int y,int num)
{
   for(int i=x;i>=y;i--)
	{
	    a[i] = a[i-1];
	}
	a[i] = num;
	x++;
       printf("Array elements after insertion : ");
	for(i=0; i<x; i++)
	{
	   printf("%d\t", a[i]);
	}
}

int main()
{   clrscr();
 void del(int [],int );
int array[100],size,num,pos;
printf("enter the size of the array");
scanf("%d",&size);
printf("Enter the elements of the array");
for(int x=0;x<size;x++)
scanf("%d",&array[x]);
printf("\n enter the element to be inserted and postion");
scanf("%d %d",&num,&pos);
printf("n Before Insertion: ");
for (int i = 0; i < size; i++)
printf("%d  ", array[i]);
ins(array,size,pos,num);

del(array,size);

 getch();
}
  void del(int array[],int n)
{ int position,c;
printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
	 array[c] = array[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
	 printf("%d\n", array[c]);
   }
  }