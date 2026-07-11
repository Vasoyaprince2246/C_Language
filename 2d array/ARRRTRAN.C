#include<stdio.h>
#include<conio.h>

void main(){
int arr[100][100],i,j,l;
clrscr();
   printf("enter size of arr:");
   scanf("%d",&l);

   for(i=0;i<l;i++){
	for(j=0;j<l;j++){
	printf("enter element[%d][%d]: ",i,j);
	scanf("%d",&arr[i][j]);
	}
   }
     printf("arr is origenal:\n");
   for(i=0;i<l;i++){
	for(j=0;j<l;j++){
	printf(" %d ",arr[i][j]);
	}  printf("\n");
   }
      printf("arr is transform:\n");
    for(i=0;i<l;i++){
	for(j=0;j<l;j++){
	printf(" %d ",arr[j][i]);
	}  printf("\n");
   }

getch();
}