#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int A, B;
	int F, Y;
	int  C, D, E, TR;
	float  P,RIZ;
  
    system ("chcp 1253");
    
    printf ("������� ����������� ������� �� ���������\n");
    
    printf ("____________________________________________\n\n");
    
    printf ("�������� ��� ����� ������ : ");
    
    scanf ("%d", &A);
    printf ("\n�������� �� ������� ������: ");
    
    scanf ("%d", &B);
    C = A + B;
    D = A - B;
    E = A * B;
    F = A / B;
    Y = A % B;
    TR = A * A;
    RIZ = (float)sqrt(B);
    P= (float) A / B;
    
    	printf ("\n\t-�� �������� ��� %d ��� ��� %d ����� : %d\n\n\t", A, B, C); 
    
    	printf ("\n\t-� ������� ��� %d ��� ��� %d ����� : %d\n\n\t", A, B, D);
    
    	printf ("\n\t-�� �������� ��� %d ��� ��� %d ����� : %d\n\n\t", A, B, E);
    
   	 	printf ("\n\t-�� ������ ��� %d �� �� %d ����� : %d\n\n\t", A, B, F);
    
   	 	printf("\n\t-�� ��������� ��� %d ����� : %d\n\n\t", A, TR);
    
    	printf("\n\t-�� ���������� ������ ��� %d ��� ��� %d ����� : %.4f\n\n\t", A, B, P);
    
    	printf("\n\t-�� �������� ��� ��������� ��� %d �� �� %d ����� : %d\n\n\t", A, B, Y);
    	
    	printf("\n\t-� ����������� ���� ��� %d ����� : %.4f\n\n\t", B , RIZ);
    
    return 0;
}
