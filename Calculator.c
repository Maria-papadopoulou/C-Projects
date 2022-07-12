#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int A, B;
	int F, Y;
	int  C, D, E, TR;
	float  P,RIZ;
  
    system ("chcp 1253");
    
    printf ("Βασικές αριθμητικές πράξεις με Ακεραίους\n");
    
    printf ("____________________________________________\n\n");
    
    printf ("Εισάγετε τον πρώτο αριθμό : ");
    
    scanf ("%d", &A);
    printf ("\nΕισάγετε το δεύτερο αριθμό: ");
    
    scanf ("%d", &B);
    C = A + B;
    D = A - B;
    E = A * B;
    F = A / B;
    Y = A % B;
    TR = A * A;
    RIZ = (float)sqrt(B);
    P= (float) A / B;
    
    	printf ("\n\t-Το ’θροισμα του %d και του %d είναι : %d\n\n\t", A, B, C); 
    
    	printf ("\n\t-Η Διαφορά του %d και του %d είναι : %d\n\n\t", A, B, D);
    
    	printf ("\n\t-Το Γινόμενο του %d και του %d είναι : %d\n\n\t", A, B, E);
    
   	 	printf ("\n\t-Το Πηλίκο του %d με το %d είναι : %d\n\n\t", A, B, F);
    
   	 	printf("\n\t-Το Τετράγωνο του %d είναι : %d\n\n\t", A, TR);
    
    	printf("\n\t-Το Πραγματικό πηλίκο του %d και του %d είναι : %.4f\n\n\t", A, B, P);
    
    	printf("\n\t-Το Υπόλοιπο της διαίρεσης του %d με το %d είναι : %d\n\n\t", A, B, Y);
    	
    	printf("\n\t-Η Τετραγωνική ρίζα του %d είναι : %.4f\n\n\t", B , RIZ);
    
    return 0;
}
