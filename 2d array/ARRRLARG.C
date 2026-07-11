#include<stdio.h>
#include<conio.h>

void main(){
 int arr[100][100],i,j,l,max;
clrscr();
	printf("enter array size:");
	scanf("%d",&l);

	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			printf("enter element of[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
		 printf("\n");
	}
	    max=arr[0][0];
	for(i=0;i<l;i++){
		 for(j=0;j<l;j++){
			 if(max<arr[i][j]){
			 max=arr[i][j];
			 }
		}
	}
	printf("largest element is : %d",max);
getch();
}
