/* author :prince
   doc    :29-06-2026
   sub    :patten
   */
#include<stdio.h>
#include<conio.h>

void main(){
int i=1,n=1,j=1,m;                          //1
clrscr();                                   //3 2
   for(i=1;i<=5;i++){                       //4 5 6
					    //10 9 8 7
     if(i%2==0){                            //11 12 13 14 15
	    m=n+i-1;
	 for(j=1;j<=i;j++){
	   printf("\t %d",m);
	   m--;
	     }
	   n=n+i;
	 }

     else{

	 for(j=1;j<=i;j++){
	      printf("\t %d",n);
	      n++;
	    }
	 }
	  printf("\n");
   }
getch();
}