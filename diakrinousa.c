#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
	system("chcp 1253");
	double a, b, c;
	double x,x1,x2;
	double D;
	
	printf("________________________________________\n\n");
	printf("\nΛύση Δευτεροβάθμιας Εξίσωσης!\n\n");
	printf("________________________________________\n\n");
	printf("\nΕισάγετε τον πρώτο συντελεστή: ");
	scanf("%lf", &a);
	printf("\nΕισάγετε τον δεύτερο συντελεστή: ");
	scanf("%lf", &b);
	printf("\nΕισάγετε τον τρίτο συντελεστή: ");
	scanf("%lf", &c);
	printf("%.lf*x^2+%.lf*x+%.lf", a,b,c);

if (a!=0)	
{
	D=b*b-4*a*c;
	printf("\n\tΔιακρίνουσα = %.lf\n\n", D);

	if (D>0)
	{
		printf("Η εξίσωση έχει δύο άνισες λύσεις.\n\n ");
		x1=-(b-sqrt(D))/(2*a);
		x2=-(b+sqrt(D))/(2*a);
		printf("\tx1= %.2lf\n" , x1);
		printf("\tx2= %.2lf\n", x2 );
	}
			else if (D==0)
			{
				printf("Υπάρχει μία διπλή ρίζα της εξίσωσης και είναι: %.2lf", -b/(2*a));
		
			}	
				else 
				{
					printf("\nΗ εξίσωση δεν έχει λύσεις στο σύνολο των πραγματικών αριθμών R.\n");		
				}
}


if(a==0)
{

	if(b==0 && c==0) 
	{
		printf("Αόριστη εξίσωση");
	}
		else if(b==0 && c!=0) 
		{
			printf("Αδύνατη Εξίσωση.");
		}
				else if (b!=0 && c!=0)
				{
					printf("Η εξίσωση έχει μία λύση: %.2lf", -c/b);
				}
return 0;
}
}
