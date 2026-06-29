/*   author :prince
      doc   :24-06-2026
      sub   :3num compare
*/
#include<stdio.h>
#include<conio.h>

void main(){

int n1,n2,n3;

clrscr();
 printf("enter number n1: ");
 scanf("%d",&n1);
  printf("enter number n2: ");
 scanf("%d",&n2);
  printf("enter number n3: ");
 scanf("%d",&n3);


 if(n1>n2){
      if(n1>n3){
	 printf("number is n1 greter than" );
      }
      else if(n1==n3){
	   printf("number n1 and n3 are equl");
      }
      else{
	 printf("n3 is greter ");
	 }

 }
 else if(n1==n2){
	if(n1==n3){
	    printf("all number are equl");
       }
       else{
	    printf("n1 and n2 are equl");
       }

 }
 else{
   if(n2>n3){
	  printf("number is n2 greter than" );
      }
      else if(n2==n3){
	   printf("number n2 and n3 are equl");
      }
      else{
	   printf("n3 is greter ");
		 }
	       }
  getch();

}