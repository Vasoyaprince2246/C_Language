#include<stdio.h>
#include<conio.h>

void main(){
 int i,j,n;
 clrscr();
      printf("enter number :");
      scanf("%d",&n);
    if(n%2==0){
    for(i=1;i<=n/2+1;i++){
     for(j=1;j<=5;j++){
	 if(i==1||j==1||i==n/2+1||j==5){
	  printf("* ");
       }
       else{
	 printf("  ");
       }
       }
	printf("\n");
    }
     for(i=1;i<=n/2-1;i++){
     for(j=1;j<=1;j++){
	  printf("*");
       }
	printf("\n");
    }

    }
    else{
     for(i=1;i<=n/2+1;i++){
     for(j=1;j<=5;j++){
	 if(i==1||j==1||i==n/2+1||j==5){
	  printf("* ");
       }
       else{
	 printf("  ");
       }
       }
	printf("\n");
    }
     for(i=1;i<=n/2;i++){
     for(j=1;j<=1;j++){
	  printf("*");
       }
	printf("\n");
    }


    }
 getch();
}