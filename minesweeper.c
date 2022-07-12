#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int line(int);//γραμμη
int column(int);//στηλη
int bomb(int, int, int);//βομβες
char **Matrix(int, int);//πινακας

void input(char **, int , int);//εισοδος
void fill(char **, int , int);//αρχικοποίηση πίνακα
int bombcheck(char**,int , int ,int);//ελεγχος βομβων
char Random(char **, int ,int, int ,int);//τυχαιες τιμες
void showMatrix(char **, int , int, int);//εμφανιση πινακα
void out(FILE*, char**, int, int, int);//εξοδος σε αρχειο
int full(char **, int, int, int, int);

int main(int argc, char **argv)
{
	system("chcp 1253");
	char **Mat;
	int i;
	int rows, columns, bombs;
	printf("\n\n");
	printf("Ναρκαλιευτής\n");
	printf("============================\n");
	printf("\n\n");

		printf("Εισάγετε το μέγεθος του πίνακα NxM\n ");
		printf("\nN=γραμμές , Μ=στήλες του πίνακα.\n");
		printf("\n");
		printf("******************************\n");
		
		rows=line(rows);
		columns=column(columns);
		bombs=bomb(rows,columns,bombs);
		Mat=Matrix(rows,columns);
	
	input(Mat,rows,columns);
	bombcheck(Mat, rows, columns, bombs);
	fill(Mat, rows,  columns);
	showMatrix(Mat, rows, columns, bombs);
	
		
	for(i=0;i<rows; i++)	
		free(Mat[i]);
	free (Mat);
	return 0;
}


int line(int r)
{
	do
	{
	printf("Αριθμός Γραμμών :");
		scanf ("%d", &r);
	}
	while(r<=0);	
}
int column(int c)
{
	do
	{
		printf("Αριθμός Στηλών :");
		scanf ("%d", &c);
	} while(c<=0);
}

int bomb(int r, int c, int b)
{
	int i;
do
{
	printf("Αριθμός Βομβών :");
		scanf("%d", &b);
	}
		 while (b<0 && b<=(r*c));
		 for(i=0; i<=b; i++)
		 {
	if(b>(r*c))
	{
		printf("!!Εισάγατε πολλές βόμβες συγκριτικά με τις διαστάσεις του πίνακα!!\n");
		printf("\nΠαρακαλώ δοκιμάστε ξανά! Δώστε αριθμό βομβών:");
		scanf("%d", &b);
	}
}

}

char **Matrix(int r, int c)
{
	char **Mat;
	int i;
	Mat=malloc((r+1) * sizeof(char*));
	if(Mat==NULL)
	{
		printf("Δεν υπάρχει διαθέσιμη μνήμη.");
		exit(1);
	}
	
	for (i=0; i<=r+1; i++)	
	{
		Mat[i]=malloc((c+1) * sizeof(char));
		if(Mat[i]==NULL)
		{
		printf("Δεν υπάρχει διαθέσιμη μνήμη.");
		exit(1);
}
	}	
	return Mat;
}

void input(char **Mat, int r, int c)
{	
	int i,j;
	for (i = 0; i<r ; i++)
	{
		for ( j =0; j<c ; j++)
		{
		Mat[i][j]='0';
	
		}
		
	}
}

int bombcheck (char **Mat, int r, int c, int b)
{
	srand(time(NULL));
	int row, col, i;
	for (i=0; i<=b-1; i++)
	{
	
	do
		{
			row = rand() % r+1;
			col = rand() % c+1;
		}
		while ((Mat[row][col]!='0') || row==r+1||  col==c+1);
		Mat[row][col] = '*';
	
    }	
}

void fill(char **Mat, int r, int c)
{
	int i, j;
	char numb;
	for(i=1; i<r+1; i++)
	{
		for(j=1; j<c+1 ; j++)
		
			if (Mat[i][j] != '*') 
			Mat[i][j]=(numb=Random(Mat, i, j, r, c));
		
} 
}



char Random(char **Mat, int r, int c, int rows, int columns)
{
	int i, j;
	int count;
	count=0;
	char number;
	for(i=r-1; i<=r+1; i++)
		for(j=c-1; j<=c+1; j++)
			{
			if((i==0 || i==columns+1) && (j==0 || j==rows+1))
				Mat[i][j]='0';
			if (Mat[i][j]== '*')
				count++;
		}
		if (count==0)
	   number = '0';
	else
		number = count + '0';
	   
	return number;
}	 

void showMatrix(char **Mat, int r, int c, int b)
{
	int i, j;
	FILE *output;
	output=fopen("output.txt", "w");
	for(i=1; i<=r; i++)
	{ 
		for (j=1; j<=c; j++)
		
			printf ("[ %c ]",Mat[i][j]);
	
	printf("\n");
}
	out(output, Mat,r,c,b);
	fclose(output);
}

void out(FILE *output, char **Mat, int r, int c, int b)
{
int i, j;
fprintf(output,"Ναρκαλιευτής\n");
fprintf(output,"********************\n");
	for(i=1; i<=r; i++)
	{ 
		for (j=1; j<=c; j++)
		
			fprintf (output,"[ %c ]",Mat[i][j]);
	
	fprintf(output,"\n");
	
}
fprintf(output,"Αριθμός Γραμμών: %d\n", r);
fprintf(output,"Αριθμός Στηλών: %d\n", c);
fprintf(output,"Αριθμός Βομβών: %d\n", b);
	

	fclose(output);
}
