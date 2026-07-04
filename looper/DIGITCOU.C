/*
  author:prince
  doc   :02-07-2026
  sub   :count digit
*/
#include<stdio.h>
#include<conio.h>

void main(){
int count=0,n,digit;
clrscr();
   printf("enter digit:");
   scanf("%d",&n);
	while(n>0){
	    digit=n%10;
	    n=n/10;
	    count++;

	}
	 printf("%d",count);
getch();
}
