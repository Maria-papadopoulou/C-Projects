#include <stdio.h>
int main(int argc, char **argv)
{
	system ("chcp 1253");
    int gr,st, n, k;
printf("Εισάγετε αριθμό γραμμής: ");
scanf("%d", &n);
printf("\n\n\n");
/*1ο σχήμα*/
for (gr=1; gr<=n; gr++)
{
	for (st=1; st<=gr; st++)
	
		printf("*");
		printf("\n");	
}
printf("\n\n\n");
/*2ο σχήμα*/
for (gr=1; gr<=n; gr++)/*γραμμες*/
{
	for (k=gr; k<=n-1; k++)/*k=κενά*/
	{
		printf(" ");
}

for (st=1; st<=gr; st++)
	

		printf("*");
		printf("\n");	
		
}

printf("\n\n\n");

/*3ο σχήμα*/
for (gr=1; gr<=n; gr++)
{
	for (k=gr; k<=n; k++)/*k=κενά*/
	{
		printf(" ");
}
		
	for (st=1; st<=(2*gr)-1; st++)
	
		printf("*");
		printf("\n");
		
}	
printf("\n\n\n");

/*4ο σχήμα*/
for(gr=1; gr<=n; gr++)//Ν
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
