	#include<stdio.h>
#include<conio.h>

void main(){
 int i,j;
 clrscr();


    for(i=1;i<=5;i++){
	for(j=i;j<5;j++){
	printf(" ");

	}
	for(j=5-i+1;j<=5;j++){
	   printf("%d",j);
	}
	for(j=4;j>5-i;j--){
	 printf("%d",j);
	}
	printf("\n");
    }
 getch();
}