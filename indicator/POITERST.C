#include<stdio.h>
#include<conio.h>

void main(){
	char a[100];
	char *ptr=a;
	int i,l=0;


	clrscr();
		 printf("enter any string:");
		 gets(a);

		 for(i=0;a[i]!='\0';i++){
		  l++;
		 }
		 printf("string lenth is a:%d",l);


	getch();
}