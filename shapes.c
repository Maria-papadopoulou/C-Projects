#include <stdio.h>
#define pi 3.14159/*ορίζω από την αρχή τη σταθερά pi=3.14159, ώστε να χρησιμοποιηθεί στο πρόγραμμα*/
int main(int argc, char **argv)
{
	system ("chcp 1253");
	float a, v, e; /*a=ακμη του κυβου, v=όγκος κύβου, e=εμβαδόν κύβου*/
	float V, E; /*V=όγκος της σφαίρας, E=εμβαδον σφαίρας*/
		printf("\n-Εισάγετε το μήκος της ακμής του κύβου : ");
		scanf("%f", &a);
		printf("\n\n\t\tΣτοιχεία Κύβου: \n");
	
		v=(float)a*a*a;
		e=6*(a*a);
		
	printf("\n\tΟ όγκος του κύβου είναι: %.5f\n\n", v);
	printf("\n\tΤο εμβαδόν του κύβου είναι: %.5f\n\n", e);

	printf("\n\n\t\tΣτοιχεία Σφαίρας: \n");
	
		V=(float)4/3*(pi*a*a*a);/*ο τύπος του όγκου της σφαίρας είναι V=4/3*(pi*α*α*α);*/
		E=4*(pi*a*a);
		
	printf("\n\tΟ όγκος της σφαίρας είναι: %.5f\n\n", V);
	printf("\n\tΤο εμβαδόν της σφαίρας είναι: %.5f\n\n", E);
	
	return 0;
}