#include <stdio.h>
#include <stdlib.h>

int input();
int *matrix1 (int);
void calculation (int *, int);
void inputmat (int *, int, int);
void output(int *, int);


int main (int argc, char **argv)
{
	system ("chcp 1253");
	
	int n;
	int *mat;
	printf ("=============================\n");
	printf ("πίνακας με μη πρώτους αριθμούς\n\n");
	n = input ();
	mat = matrix1(n);
	calculation (mat, n);
	output (mat, n);
	
	
	return 0;
}

int input()
{
	int n;
	printf ("Δώσε ακέραιο θετικό αριθμό: ");
	scanf ("%d",&n);
	return n;
}

int *matrix1 (int a)
{
	int i;
	int *m;
	
	m = (int *) malloc (a * sizeof (int));
	if (m == NULL)
	{
		printf ("Δεν υπάρχει διαθέσιμη μνήμη\n");
		exit (EXIT_FAILURE);
	}
	return m;
}

void calculation (int *mat, int n)
{
	int i, j;
	int p;
	int flag;
	int pos;
	
	i = 1;
	pos = 0;
	do
	{
		flag = 0;
	    p = 0;
	    for (j = 2; j < i - 1; j++)
	        if (i % j == 0)
	           p++;
	    if (p > 0)
	    {
	    	inputmat (mat, i, pos);
	    	pos++;
	    	flag = 1;	
		}
		i++;
    }
    while (flag == 0 || pos <= n);
	
}

void inputmat (int *mat, int i, int pos)
{
	*(mat + pos) = i;
}

void output(int *mat, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf ("%d\n", *(mat + i));
	}
}
