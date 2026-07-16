#include<stdio.h>
#include<conio.h>

void main(){
char str[100],strup[100];
int i;
clrscr();
	printf("enetr the string:");
	scanf("%s",str);

		for(i=0;str[i]!='\0';i++){

		  str[i]=str[i]-32;

		}


	 printf("%s",str);

getch();
}
