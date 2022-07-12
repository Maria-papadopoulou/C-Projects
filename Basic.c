#include <stdio.h>/*οδηγία για είσοδο-έξοδο δεδομένων*/

int main(int argc, char **argv)
{
    int A, B;
    int C, D, E, F; 
    system ("chcp 1253");/*Εμφάνιση ελληνικών χαρακτήρων*/
    printf ("Βασικές αριθμητικές πράξεις με Ακεραίους\n");
    printf ("========================================\n\n");
    printf ("Εισάγετε τον πρώτο αριθμό : ");
    scanf ("%d", &A);
    printf ("Εισάγετε το δεύτερο αριθμό: ");
    scanf ("%d", &B);
    C = A + B;
    D = A - B;
    E = A * B;
    F = A / B;
    
    printf ("Άθροισμα  : %d\n", C); 
    printf ("Διαφορά   : %d\n", D);
    printf ("Γινόμενο  : %d\n", E);
    printf ("Πηλίκο    : %d\n", F);
    return 0;
}

