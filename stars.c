#include <stdio.h>
int main(int argc, char **argv)
{
	system ("chcp 1253");
    int gr,st, n, k;
printf("ÅéóÜãåôå áñéèìü ãñáììÞò: ");
scanf("%d", &n);
printf("\n\n\n");

for (gr=1; gr<=n; gr++)
{
	for (st=1; st<=gr; st++)
	
		printf("*");
		printf("\n");	
}
printf("\n\n\n");

for (gr=1; gr<=n; gr++)
{
	for (k=gr; k<=n-1; k++)
	{
		printf(" ");
}

for (st=1; st<=gr; st++)
	

		printf("*");
		printf("\n");	
		
}

printf("\n\n\n");


for (gr=1; gr<=n; gr++)
{
	for (k=gr; k<=n; k++)
	{
		printf(" ");
}
		
	for (st=1; st<=(2*gr)-1; st++)
	
		printf("*");
		printf("\n");
		
}	
printf("\n\n\n");


for(gr=1; gr<=n; gr++)//Í
{
for(st=1; st<=n; st++)
{
	if ((gr==1 || st==1) || (gr==n || st==n))
		printf("*");
		else
		printf(" ");
				if (gr==st)
					printf(".");
						if(gr+st==n)
							printf(".");
	if(gr==st)
	{
		if (gr!=1 && st!=1)
			if(gr!=n && gr!=st)
			
		if (gr+st==n+1)
			if (st!=1 && st!=n)
				if (gr!=n && gr!=n)
					printf(".");
				}
		if((gr+st==n+1) && (gr==st))
		{
		if(gr==1 && st==1)
		{
		if(gr!=n && st!=n)
		
				printf(" ");
		}
	}
}
printf("\n");
}
return 0;
}
