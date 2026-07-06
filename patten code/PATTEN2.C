	/*
	author:prince
	doc   :02-07-2026
	sub   :patten
	*/
#include<stdio.h>
#include<conio.h>
void main(){
 int i,j,n;
 clrscr();
	 printf("enter number:");
	 scanf("%d",&n);

	 for(i=1;i<=n;i++){
	   for(j=n+1-i;j<=n;j++){
	   printf("%d",j);
	   }            printf("\n");
	 }
 getch();
}