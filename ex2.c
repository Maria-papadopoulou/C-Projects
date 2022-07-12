#include <stdio.h>
#include <math.h>

int menu(int, int);
float Func_1(int, int);
int Func_2(int , int);
int Func_3(int,int);
float mypower(int, int);//δύναμη
int myfactor(int);//παραγοντικό
int comb(int, int);//συνδυασμός

int main(int argc, char **argv)
{
	system ("chcp 1253");
	int a, b;
	printf("Εισάγετε τον 1ο αριθμό: \n");
	scanf ("%d", &a);
	printf("Εισάγετε τον 2ο αριθμό: \n");
	scanf ("%d", &b);
	mymenu (a,b);
	printf("\n");
	printf (". . . Έξοδος");

}
int mymenu(int a, int b)
{
	int choice ,sumch;
	sumch=0;
	do
	
	{
		system ("cls"); //καθαρισμός οθόνης
		printf("Βασικό Μενού Επιλογών.\n");
		printf("**************************\n\n");
		printf("1.Υπολογισμός της δύναμης Α^Β.\n\n");
		printf("2.Υπολογισμός Α! και Β!\n\n");
		printf("3.Υπολογισμός του πλήθους των συνδυασμών Α ανά Β.\n\n");
		printf("4.Έξοδος από το Μενού!\n\n");
		printf("Είσοδος επιλογής: ");
		scanf ("%d", &choice);
		sumch=sumch+1;//άθροισμα επιλογών
		printf("\nΈγιναν συνολικά %d επιλογές.\n\n" ,sumch);
		switch (choice)
		{
		case 1: Func_1(a,b); break;
		case 2: Func_2(a,b); break;
		case 3: Func_3(a,b); break;
		}	
}
while (choice!=4);
}
//Εμφάνιση Δυνάμεων
	float Func_1(int a, int b)
	{
		system("cls");
		float p;
		p=mypower(a,b);
		printf("Υπολογισμός Δύναμης\n");
		
		if(a>0 && b>0)
		{
		printf("%d^%d= %.1lf\n",a,b ,p);
		}

	else if(a<0 && b>0)
		{
			printf("(%d)^%d= %.1lf\n", a,b,p);
		}
		else if(a<0 && b<0)
		{
			printf("(%d)^(%d)=%.1lf\n", a,b,p);
		}
		else if(a>0 && b<0)
		{
			printf("%d^(%d)= %.1lf\n", a,b, p);
		}
		else 
		{
			printf("%d ^ %d=1\n", a,b);
		}
		system ("pause");
}
//Υπολογισμός δύναμης
float mypower(int a, int b)
{
int j;
float p;
if (a==0)
	p=0;
else
{
	if (b==0)
		p=1;
		else
		{
			if (b>0)
				for (j=1, p=1; j<=b; j++)
				p*=a;
				else
				{
					for (j=-1, p=1; j>=b; j--)
					{
						p*=a;
					}
					p= (float)1/a;
					
				}
			
		}
	}
	return p;
}


//Εμφάνιση παραγοντικού	
int Func_2(int a, int b)
{
	system ("cls");

	int res1,res2;
	res1=myfactor(a);
	res2=myfactor(b);
if(a>0 && b>0 )
	{
	printf("Υπολογισμός Α! και Β!\n");
	
	printf("%d! = %d\n",a,res1);
	printf("%d! = %d\n",b, res2);
}
if(a<0 && b>0)
{
	printf("Υπολογισμός του Β!.\n");
	printf("%d! = %d\n", b, res2);
	printf("Το Α! δεν εμφανίζεται, γιατί είναι αρνητικός αριθμός.\n");
}
if(a>0 && b<0)
{
	printf("Υπολογισμός του Α!.\n");
	printf("%d! = %d\n", a, res1);
	printf("To B! δεν εμφανίζεται, γιατί είναι αρνητικός αριθμός.\n");
}
 if(a<0 && b<0)
 {
 printf("Υπολογισμός Α! και Β!\n");
printf("Δεν είναι δυνατή η πράξη με αρνητικούς αριθμούς\n");
}
system("pause");
}
//Υπολογισμός παραγοντικού
int myfactor(int n)
{
	int i,p;
	p=1;
	for(i=1; i<=n; i++)
		p*=i;

return p;

    	
system("pause");
}

//Εμφάνιση συνδυασμών Α ανά Β
int Func_3(int a, int b)
{
	system ("cls");
	int y;
	y=mycomb(a,b);
	printf("Συνδυασμοί %d ανά %d.\n", a, b);
	if(a>=b && a>0 && b>0)
	{
	printf("%d\n", y);	
}
	if(a<b)
	{
	printf("Δεν είναι δυνατή η εμφάνιση αποτελέσματος διότι %d < %d\n",a,b, a,b);
}

	if(a<0 && b>0)
	{
	
	printf("Δεν είναι δυνατή η εκτέλεση της πράξης γιατί υπάρχει αρνητικός αριθμός\n");
}
	if(a>0 && b<0)
	{

	printf("Δεν είναι δυνατή η εκτέλεση της πράξης γιατί υπάρχει αρνητικός αριθμός\n");
}
if(a<0 && b<0)
{
		printf("Δεν είναι δυνατή η εκτέλεση της πράξης γιατί υπάρχουν αρνητικοί αριθμοί.\n");
}

	system ("pause");
}

//Υπολογισμών συνδυασμών
int mycomb(int a, int b)
{
system ("cls");
int result,y,d;

d=a-b;
y=myfactor(d);
result = myfactor(a)/(myfactor(b)*y);

	return result;

system ("pause");
}
