#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
	system("chcp 1253");
	double a, b, c;
	double x,x1,x2;
	double D;
	
	printf("________________________________________\n\n");
	printf("\n���� �������������� ��������!\n\n");
	printf("________________________________________\n\n");
	printf("\n�������� ��� ����� ����������: ");
	scanf("%lf", &a);
	printf("\n�������� ��� ������� ����������: ");
	scanf("%lf", &b);
	printf("\n�������� ��� ����� ����������: ");
	scanf("%lf", &c);
	printf("%.lf*x^2+%.lf*x+%.lf", a,b,c);

if (a!=0)	
{
	D=b*b-4*a*c;
	printf("\n\t����������� = %.lf\n\n", D);

	if (D>0)
	{
		printf("� ������� ���� ��� ������ ������.\n\n ");
		x1=-(b-sqrt(D))/(2*a);
		x2=-(b+sqrt(D))/(2*a);
		printf("\tx1= %.2lf\n" , x1);
		printf("\tx2= %.2lf\n", x2 );
	}
			else if (D==0)
			{
				printf("������� ��� ����� ���� ��� �������� ��� �����: %.2lf", -b/(2*a));
		
			}	
				else 
				{
					printf("\n� ������� ��� ���� ������ ��� ������ ��� ����������� ������� R.\n");		
				}
}


if(a==0)
{

	if(b==0 && c==0) 
	{
		printf("������� �������");
	}
		else if(b==0 && c!=0) 
		{
			printf("������� �������.");
		}
				else if (b!=0 && c!=0)
				{
					printf("� ������� ���� ��� ����: %.2lf", -c/b);
				}
return 0;
}
}
