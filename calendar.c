#include <stdio.h>

int main(int argc, char** argv)
{
    system("chcp 1253");
    int month, year;
    printf("Ημερολόγιο\n");
    printf("******************\n\n");
    printf("Μήνες: \n");
    printf("1. Ιανουάριος\n");
    printf("2. Φεβρουάριος\n");
    printf("3. Μάρτιος\n");
    printf("4. Απρίλιος\n");
    printf("5. Μάιος\n");
    printf("6. Ιούνιος\n");
    printf("7. Ιούλιος\n");
    printf("8. Αύγουστος\n");
    printf("9. Σεπτέμβρης\n");
    printf("10. Οκτώβρης \n");
    printf("11. Νοέμβρης\n");
    printf("12. Δεκέμβρης\n");
    printf("******************\n\n");
    printf("Δώσε έτος: \n");
    scanf("%d", &year);
  
     while((year<0))
	{
		printf("Δεν έδωσες σωστή τιμή για το ημερολογιακό έτος. Δοκίμασε ξανά!\n");
		scanf("%d", &year);
	}
    printf("Δώσε μήνα: \n");
    scanf("%d", &month);
     while(month==0 || month < 0)
 	{
 		printf("Δεν έδωσες σωστή τιμή για τον μήνα [1...12]. Δοκίμασε ξανά!\n");
 		scanf("%d", &month);
	}  
	


(((month==2) && (year%4==0) && ((year%400==0) || (year%100!=0)))) ?   printf("Το έτος %d είναι δίσεκτο \n", year):  printf("Το έτος %d δεν είναι δίσεκτο\n", year);
    switch(month)
    {
        case 1:
            printf("Αριθμός ημερών: 31\n"); break;
        case 2:
        	(((year%4==0) && ((year%400==0) || (year%100!=0)))) ?  printf("Αριθμός ημερών: 29\n") :  printf("Αριθμός ημερών: 28\n");
        	break;
        case 3:
            printf("Αριθμός ημερών: 31\n"); break;
        case 4:
            printf("Αριθμός ημερών: 30\n"); break;
        case 5:
            printf("Αριθμός ημερών: 31\n"); break;
        case 6:
            printf("Αριθμός ημερών: 31\n"); break;
        case 7:
            printf("Αριθμός ημερών: 31\n"); break;
        case 8:
            printf("Αριθμός ημερών: 31\n"); break;
        case 9:
            printf("Αριθμός ημερών: 30\n"); break;
        case 10:
            printf("Αριθμός ημερών: 30\n"); break;
        case 11:
            printf("Αριθμός ημερών: 30\n"); break;
        default:
            printf("Αριθμός ημερών: 31\n"); break;
            
    }
    
    
    return 0;
}
