#include<stdio.h>
#include<conio.h>

int sumarr(int arr[],int n);

void main(){
	int arr[100],i,n;
	clrscr();

		 printf("enter the arr of element size:");
		 scanf("%d",&n);
		 for(i=0;i<n;i++){
			printf("enter arr element[%d]:",i);
			scanf("%d",&arr[i]);
		 }

		 sumarr(arr,n);

	getch();
}

int sumarr(int arr[],int n){
	int sum=0,i;
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("sum of arr is :%d",sum);

}