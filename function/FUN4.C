#include<stdio.h>
#include<conio.h>

void str(char str1[]);

void main(){
	char str1[100];

	clrscr();
		printf("enter the string:");
		scanf("%s",str1);
		str(str1);
	getch();
}


void str(char str1[]){
	int i,count=0;

	for(i=0;str1[i]!='\0';i++){
	    count++;
	}

	printf("\nstring length is a: %d",count);

}