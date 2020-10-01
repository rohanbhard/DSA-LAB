#include<stdio.h>
#include<conio.h>

void main()
{ clrscr();
  void add_mat(int [10][10],int[10][10],int ,int);
  void mul_mat(int [10][10],int [10][10],int,int,int);
  int m, n, p, q, c, d, k, choi;
  int first[10][10], second[10][10], multiply[10][10];

  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);

  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);

  if (n != p)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of second matrix\n");

    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
	scanf("%d", &second[c][d]);

   printf("\n enter the  choice 1. addition\n 2.multiplicatin");
   scanf("%d",&choi);
   switch(choi)
   {
     case 1:
     add_mat(first,second,m,n);
     break;
     case 2:
     mul_mat(first,second,m,n,q);
     break;
     default:
     printf("\n wrong choice idiot !");

     }
     getch();
     }
     }
   void add_mat(int first[10][10],int second[10][10],int i,int j)
   {   int add[10][10],x,y;
       for( x=0;x<i;x++)
       {
	  for( y=0;y<j;y++)
	  {
	      add[x][y]=first[x][y]+second[x][y];
	      }
	      }
      printf("\n the added matrix is ");
      for( x=0;x<i;x++)
      {
	for(y=0;y<j;y++)
	printf("%d ",add[x][y]);
	printf("\n");
	}
     }
   void mul_mat(int first[10][10],int second[10][10],int m,int q,int p)
    {  int c,sum=0,d,k,multiply[10][10];
    for (c=0; c < m; c++)
    {
      for (d = 0; d < q; d++)
      {
	for (k = 0; k < p; k++)
	{
	  sum = sum + first[c][k]*second[k][d];
	}

	multiply[c][d] = sum;
	sum = 0;
      }
    }

    printf("Product of the matrices:\n");

    for (c = 0; c < m; c++)
    {
      for (d = 0; d < q; d++)
	printf("%d\t", multiply[c][d]);

      printf("\n");
    }
  }
