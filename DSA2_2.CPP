#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(){

	clrscr();
	int i;
	int count;
       char *arr;



	printf("Enter the total number of elements you want to enter : ");
	scanf("%d",&count);


	arr = (char *)malloc(count * sizeof(char));
    //	printf("\n the base address of the malloc is %d",arr);
       //	char a[]="welcome to the class";
	strcpy(arr,"welcome the class");
	printf("\n the base adress is %u",arr);
	printf("\n the values are %s",arr);

	arr=(char*)realloc(arr,200);

	printf("\nthe new addresss %u",arr);
	strcpy(arr,"hows the class");
	printf("\n the new value is %s",arr);
	free(arr);
	getch();
	return 0;
}