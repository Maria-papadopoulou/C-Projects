#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	float m;
	int pros,i,j;
	double Diafora_orwn,Diaf,palios_oros,neos_oros, x,sum;
	
	system ("chcp 1253");
	printf ("Εισάγετε τη γωνία που επιθυμείτε σε μοίρες: ");
	scanf("%f", &m);
	x= (double) 3.1415926/180*m;/*μετατροπή μοιρών σε ακτίνια*/
	Diaf=10E-5;/*αρχικοποιώ τη διαφορά των όρων σε μία τιμή εκτός ορίων ώστε να συνθήκη να είναι πάντα αληθής*/
	sum=0;/*άθροισμα*/
	pros=1;/*πρόσημο*/
	palios_oros=0;/*προηγούμενος όρος*/
	
	/*αρχική επανάληψη:σταματάει όταν η διαφορά δύο διαδοχικών όρων είναι μικρότερη από 10E-6.*/
	for (i = 1; Diaf>10E-6; i=i+2)
		{
			neos_oros=1;/*επόμενος όρος*/
			/*δεύτερη επανάληψη:υπολογισμός*/
			j=1;
			while (j<=i)
			
			{
				neos_oros=neos_oros*(x/j);
				j++;
			}
			
			Diafora_orwn=palios_oros-neos_oros;/*Διαφορά δύο διαδοχικών όρων*/
			Diaf=fabs(Diafora_orwn);/*Η απόλυτη τιμή αποθηκεύεται στη μεταβλητή Diaf, ώστε να ελεγχθεί το αποτέλεσμα*/
										/*αν είναι μικρότερο του 10Ε-6*/
			neos_oros=neos_oros*pros;/*ο νέος όρος πολλαπλασιάζεται με το πρόσιμο*/
			neos_oros==palios_oros;/*αντικαθιστώ τον επόμνο όρο στον προηγούμενο*/
			sum=sum+neos_oros;/*αθροίζω τον επόμενο όρο*/
			pros=-1*pros;/*αλλάζω το πρόσημο*/
		}
	
		printf("Sin(%3.1f)= %lf      %f",m, sum, sin(x));/*εμφάνιση αποτελεσμάτων*/
		return 0;	
	}
