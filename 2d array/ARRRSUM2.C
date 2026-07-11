#include<stdio.h>
#include<conio.h>

void main(){
 int arr1[100][100],arr2[100][100],i,j,l,arrsum[100][100];
 clrscr();
	 printf("enter array size is :");
	 scanf("%d",&l);

	 for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			printf("enter the element of aar1[%d][%d]:",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}

	 for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			printf("enter the element of arr2[%d][%d]:",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}

	printf("\narr1 is a:\n");
	 for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			printf(" %d ",arr1[i][j]);
		}printf("\n");
	}

	printf("\narr2 is a:\n");
	 for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			printf(" %d ",arr2[i][j]);
		}printf("\n");
	}

	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
		  arrsum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	printf("\n sum of array is :\n");
	 for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			printf(" %d ",arrsum[i][j]);
		}printf("\n");
		}

 getch();
}