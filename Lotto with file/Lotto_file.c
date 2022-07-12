#include <stdio.h>
#include <stdlib.h>
#define lim 6
int numberOfN(int, int *,FILE **);
int input(FILE **);
int *matrix(int);
void numbersX1X2(int , int,FILE **);
void numbersY1Y2(int, int,FILE **);
int search(int *, int);
void sort(int *, int );
int chX1X2(int*, int, int);
int chY1Y2(int*, int, int);
void pl_prwtoy_oroy(int);
void pl_deyteroy_oroy(int);
void syxnothta_emfanishs(int *, int *, int *, int);
void pl_syxnothtas_emfanishs (int *, int);
void print_syxnothta(int *, int, int *);
void syndyasmoi(int, int, int, int,int,int *, int *, int *, int *, int *);
void printSynd(int *);

int main(int argc, char **argv)
{
	
	int x1, x2;
	int y1, y2;
	int n;
	int i;
	int plX1X2=0;
	int plY1Y2=0; 
	int	pl_synd=0;
	int *matA,*matb, *matPl_em;
	int mat;
	FILE *fp;
	system ("chcp 1253");
	fp = fopen(*(argv + 1), "r");
	if (fp == NULL)
	 printf("Δεν υπάρχει το αρχείο");
	
		n=input(&fp);	
		matA = matrix(n);
		matb=matrix(lim);
		matPl_em=matrix(n);
		numberOfN(n, matA, &fp);
		numbersX1X2(x1, x2, &fp);
		numbersY1Y2(y1, y2, &fp);
		fclose(fp);
		pl_syxnothtas_emfanishs (matPl_em,n);
		syndyasmoi(x1,x2,y1,y2, n,matA, matb,matPl_em,&plX1X2,&plY1Y2);
		search(matA, i);
		sort(matA, n);	

	pl_prwtoy_oroy(plX1X2);
	pl_deyteroy_oroy(plY1Y2);
	

	
	free(matPl_em);
	free(matA);
	free(matb);

	return 0;
}
int input(FILE **fp)
{

		
	int n;
	do 
	{

		fscanf (*fp ,"%d", &n);

	}
	while (n < 7 || n > 49);
	
	return n;
}
int *matrix(int c)
{
int *mt;
	mt=(int*)malloc(c*sizeof(int));
	if(mt==NULL)
	{
		printf("Δεν υπάρχει διαθέσιμη μνήμη.\n");
		exit(1);
}
	return mt;
}
int numberOfN(int c, int *matA,FILE **fp)
{
	int src;
	int i;

for (i =0; i <c; i++)
	{
		do
		{
		    fscanf(*fp,"%d",&*(matA + i));
		    src = search (matA, i);
		}
		while ((*(matA + i) <= 0) || (*(matA + i) > 49) || src == 1);
	}		
}
int search(int *matA, int i)
{
	int j;
	j = 0;
	while (j < i && (*(matA + j) != *(matA + i)))
	
		j++;
	if (j == i)
	    return 0;
	return 1;
}
void sort(int *matA, int n)
{
	int i, j,tmp;
	for(i = 0; i < n - 1; i++)
	
		for(j = i+1; j < n; j++)
		{
			if(*(matA + i) > *(matA+j))
			{
			tmp=*(matA+i);
			*(matA+i)=*(matA+j);
			*(matA+j)=tmp;
			}
			
		}
	
}
void numbersX1X2(int x1, int x2, FILE **fp)
{
	int i, j;
	do
		{

		fscanf(*fp,"%d", &x1);
		}
		while(x1<0 || x1>6);
do 
{

		fscanf(*fp,"%d", &x2);
}
while (x2<x1 || x1>6);	
}
void numbersY1Y2(int y1, int y2, FILE **fp)
{

	do
	{

		fscanf(*fp,"%d", &y1);
		
	} while(y1<21 || y1>279);
	do{


		fscanf(*fp,"%d", &y2);

	}
	while (y2<y1 || y1>279);
}

void syndyasmoi(int x1, int x2, int y1, int y2,int n,int *matA, int *matb, int *matPl_em, int *plX1X2, int *plY1Y2)
{
	int i, j, k, l, m,p, D1, D2,D3,D4,D5,D6, chx1x2, chy1y2, pl_synd;

	matb = (int *) malloc(lim * sizeof(int));


pl_synd=0;
	D1=n-6;
	D2=n-5;
	D3=n-4;
	D4=n-3;
	D5=n-2;
	D6=n-1;
	printf("\nΣυνδυασμοί %d αριθμών ανά 6.\n",n);
	printf("*********************************************\n");
	for(i=0; i<=D1; i++)
	 	for(j=i+1; j<=D2; j++)
	   		for(k=j+1; k<=D3; k++)
				for(l=k+1; l<=D4; l++)
					for(m=l+1; m<=D5; m++)
						for(p=m+1; p<=D6; p++)
						
						{
							pl_synd=pl_synd+1;
									*(matb+0)= *(matA+i);
									*(matb+1)= *(matA+j);
									*(matb+2)= *(matA+k);
									*(matb+3)= *(matA+l);
									*(matb+4)= *(matA+m);
									*(matb+5)= *(matA+p);
									chx1x2=chX1X2(matb,x1,x2);
									if (chx1x2==0)
									{
										plX1X2++;
									if(chy1y2==0)
										plY1Y2++;
										if(chx1x2== 0 && chy1y2==0)
										{
										syxnothta_emfanishs(matb, matPl_em, matA, n);
										printSynd(matb);
											
											printf("\n");
										}
										
}
}
printf("Πλήθος συνδυασμών Ν αριθών ανά 6:%d\n", n);
print_syxnothta(matPl_em,n, matA);
	

}
int chX1X2(int*matb, int x1, int x2)
{
	int plX1X2, i;
	plX1X2=0;
	for(i=0; i<6; i++)
		if(*(matb+i)%2==0)
			plX1X2+=1;
			if(plX1X2>=x1 && plX1X2<=x2)
				return 0;
				else
				return 1;
}
int chY1Y2(int*matb, int y1, int y2)
{
	int sumY1Y2, i;
	sumY1Y2=0;
	for(i=0; i<6; i++)
		sumY1Y2+=(*matb+i);
			if(sumY1Y2>=y1 && sumY1Y2<=y2)
				return 0;
				else
				return 1;
}
void printSynd(int *matb)
{
printf ("\t%d||%d||%d||%d||%d||%d\t", *(matb+0),*(matb+1),*(matb+2),*(matb+3),*(matb+4),*(matb+5));

}
void pl_syxnothtas_emfanishs (int *matPl_em, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		*(matPl_em+i) = 0;
  }

}
void syxnothta_emfanishs(int *matb, int *matPl_em, int *matA, int n)
{
	int i, j, fg;
	for(i=0; i<6; i++)
	{
		fg=0;
	do
		{
	 
		for(j=0; j<n; j++)
				if (*(matA + j) == *(matb + i))
			    {
			    	(*(matPl_em + j))++;
			    	fg=1;
			
			    }
		
	}
			while (fg==0);
		
	}
}	
void pl_prwtoy_oroy(int plX1X2)
{
printf("\nΠλήθος συνδυασμών που δεν πληρούσαν τον 1ο όρο:%d\n", plX1X2);
}
void pl_deyteroy_oroy(int plY1Y2)
{
printf("Πλήθος συνδυασμών που δεν πληρούσαν τον 2ο όρο:%d", plY1Y2);
}
void print_syxnothta(int *matPl_em, int n, int *matA)
{
	int i;
	
	printf ("Συχνότητα εμφάνισης των %d αριθμών.\n", n);
printf("*********************************************\n");
	for (i = 0; i <n; i++)
	{
	    printf ("Ο αριθμός %d τυπώθηκε %d φορές.",*(matA + i),*(matPl_em + i));
	    printf ("\n");
	}
}
