#include<stdio.h>
#include<conio.h>

void main(){
char str[100];
int i;
 clrscr();
	printf("enter string uper case:");
	scanf("%s",str);

	for(i=0;str[i]!='\0';i++){
	     str[i]=str[i]+32;

	}

	printf("lower case is :%s",str);

 getch();
}