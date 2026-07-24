#include<stdio.h>


int cube(int *ptr,int n);

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n][n];
    int i, j;
    


    printf("Enter array elements:\n");

    for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{
	    printf("a[%d][%d] = ",i,j);
	    scanf("%d",&a[i][j]);
	}
    }

    printf("\nCubes of all elements:\n");
    cube(&a[0][0],n);

    
}

int cube(int *ptr,int n)
{
    int i,j;

    for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{
	    printf("%d ",(*ptr)*(*ptr)*(*ptr));
	    ptr++;
	}
	printf("\n");
    }
}