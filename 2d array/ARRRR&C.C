#include<stdio.h>
#include<conio.h>

void main(){
int arr[100][100],i,j,row,col,sumrow=0,sumcol=0;
clrscr();
 printf("enter row length:");
 scanf("%d",&row);
 printf("enter colum length:");
 scanf("%d",&col);

 for(i=0;i<row;i++){
	for(j=0;j<col;j++){
	 printf("enter the arr element[%d][%d]:",i,j);
	 scanf("%d",&arr[i][j]);
	}
 }

 printf("\nenter the row number(0-%d):",i-1);
 scanf("%d",&i);
 printf("elements of row %d :",i);
	for(j=0;j<col;j++){
	 printf(" %d ",arr[i][j]);
	}
	for(j=0;j<col;j++){      f
	 sumrow+=arr[i][j];
	}
	printf("\nthe sum of row %d : %d ",i,sumrow);


	printf("\n\nenter the column number(0-%d):",j-1);
	scanf("%d",&j);
	printf("element of column %d :",j);
		for(i=0;i<row;i++){
			printf(" %d ",arr[i][j]);
		}
		for(i=0;i<row;i++){
			 sumcol+=arr[i][j];
		}
		printf("\nthe sum of column %d: %d ",j,sumcol);

getch();
}