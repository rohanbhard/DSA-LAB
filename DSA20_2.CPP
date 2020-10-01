#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int i,j,m,n,a[10][10],b[10][10],c[10][10],count1=0,count2=0;
  printf("enter the values of the row and coloum");
  scanf("%d%d",&m,&n);
  printf("\n Enter the elements of the first matrix");
  for(i=0;i<m;i++)
  {
     for(j=0;j<n;j++)
       scanf("%d",&a[i][j]);
       }
  printf("\n enter the elements of the 2 mattrix");
  for(i=0;i<m;i++)
  {   for(j=0;j<n;j++)
      scanf("%d",&b[i][j]);
    }
  printf("\n checking the matrix sparse or not ");
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      if(a[i][j]!=0)
      { count1++;
	 }
	 }
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      if(b[i][j]!=0)
      { count2++;
      }
   if((count1<((m*n)/2))||(count2<((m*n)/2)))
   printf("\ entered amtrix is not sparse");
   int add[10][10];
   for(i=0;i<m;i++)
   {  for(j=0;j<n;j++)
     add[i][j]= a[i][j]+b[i][j];
     }
   printf("\n row\tcolum\tvalue ") ;
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      if(add[i][j]!=0){
      printf("\n%d\t%d\t%d",i,j,add[i][j]);
      }


   getch();

   }
}}