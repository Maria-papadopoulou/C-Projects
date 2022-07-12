#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **a,n,i,j,check=0;
	scanf("%d",&n);

	a=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
		*(a+i)=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				scanf("%d",*(a+i)+j);
		}

	for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
				{
					if(*(*(a+i)+j)!=0)
						{
							check++;
							break;
						}
				}
		}
	if(check==0)
		printf("Upper triangular matrix");
	else	
		printf("Not a upper triangular matrix");
	return 0;
}
