#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
struct student{
int roll;
char name[100];
float pcent;
}typedef stdn;
int main()
{
  stdn *ptr;
  ptr=(stdn *)malloc(sizeof(stdn)*10);
  printf("enter entries:\n");
  int t;
  scanf("%d",&t);
  printf("Enter details one by one:");
  for(int i=0;i<t;i++)
  {getchar();
  	printf("Name:");
  	gets((ptr+i)->name);
  	printf("roll:");
    scanf("%d",&(ptr+i)->roll);
    printf("Enter percentage:");
    scanf("%f",&(ptr+i)->pcent);

  }
  for(int i=0;i<t;i++)
  {
  	printf("Name:%s\n",(ptr+i)->name);
  	//scanf("%[^\n]%*c",(ptr+i)->name);
  	printf("roll:%d\n",(ptr+i)->roll);
   // scanf("%d",&(ptr+i)->roll);
    printf("percentage:%0.2f",(ptr+i)->pcent);
    //scanf("%f",&(ptr+i)->pcent);

  }
}