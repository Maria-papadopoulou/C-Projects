#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	float m;
	int pros,i,j;
	double Diafora_orwn,Diaf,palios_oros,neos_oros, x,sum;
	
	system ("chcp 1253");
	printf ("�������� �� ����� ��� ���������� �� ������: ");
	scanf("%f", &m);
	x= (double) 3.1415926/180*m;/*��������� ������ �� �������*/
	Diaf=10E-5;/*���������� �� ������� ��� ���� �� ��� ���� ����� ����� ���� �� ������� �� ����� ����� ������*/
	sum=0;/*��������*/
	pros=1;/*�������*/
	palios_oros=0;/*������������ ����*/
	
	/*������ ���������:��������� ���� � ������� ��� ���������� ���� ����� ��������� ��� 10E-6.*/
	for (i = 1; Diaf>10E-6; i=i+2)
		{
			neos_oros=1;/*�������� ����*/
			/*������� ���������:�����������*/
			j=1;
			while (j<=i)
			
			{
				neos_oros=neos_oros*(x/j);
				j++;
			}
			
			Diafora_orwn=palios_oros-neos_oros;/*������� ��� ���������� ����*/
			Diaf=fabs(Diafora_orwn);/*� ������� ���� ������������ ��� ��������� Diaf, ���� �� �������� �� ����������*/
										/*�� ����� ��������� ��� 10�-6*/
			neos_oros=neos_oros*pros;/*� ���� ���� ���������������� �� �� �������*/
			neos_oros==palios_oros;/*����������� ��� ������ ��� ���� �����������*/
			sum=sum+neos_oros;/*������� ��� ������� ���*/
			pros=-1*pros;/*������ �� �������*/
		}
	
		printf("Sin(%3.1f)= %lf      %f",m, sum, sin(x));/*�������� �������������*/
		return 0;	
	}
