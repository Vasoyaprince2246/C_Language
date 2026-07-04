/*
 author:prince
 doc   :02-07-2026
 sub   :odd or even number sum
*/
#include<stdio.h>
#include<conio.h>
void main(){
 int n,digit,odd=0,even=0;
 clrscr();
 printf("enter digit:");
 scanf("%d",&n);
	 while(n>0){
	 digit=n%10;
	   if(digit%2==0){
		 even+=digit;
		 }
	   else {
		 odd+=digit;
		 }
	 n=n/10;
	 }

	  printf("odd number sum is :%d",odd);
	  printf("\neven number sum is :%d",even);
 getch();
}