	/*
	author:prince
	doc   :02-07-2026
	sub   :patten3
	*/
#include<stdio.h>
#include<conio.h>
void main(){
 int i,j,n;
 clrscr();
	 printf("enter number:");
	 scanf("%d",&n);

	 for(i=n;i>=1;i--){
	   for(j=1;j<=n-i+1;j++){
	   printf("%d",i
	   );
	   }

		   printf("\n");
	 }
 getch();
}