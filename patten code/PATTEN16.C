#include<stdio.h>
#include<conio.h>

void main(){
 int i,j;
 clrscr();
	 for(i=1;i<=5;i++){

	    for(j=1;j<=6-i;j++){
		printf("%d ",j);
	    }
	     for(j=1;j<i;j++){
		 printf("  ");
	    }

	   printf("\n");
	 }

      for(i=1;i<=5;i++){
		 for(j=1;j<=i;j++){
		       printf("%d ",j);
		 }
		 for(j=1;j<=5-i;j++){
		     printf("  ");
		 }


	    printf("\n");

	    }
	 getch();
}
