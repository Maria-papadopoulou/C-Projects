#include <stdio.h>
int main(int argc, char **argv)
{
	system ("chcp 1253");
	int a, b,c;
	int Max, Max_th;
	printf("������ ����� ����������� ������� \n\n");
	printf("����� ��� ����� ������: ");
	scanf("%d", &a);
	printf("\n����� ��� ������� ������: ");
	scanf("%d", &b);
	printf("\n����� ��� ����� ������: ");
	scanf("%d", &c);
	Max=a;/*����� ������� ��� ����� ������*/
	Max=(b>Max)?b:Max;/*�������� ��� ������� ������ ��� ����� �� ��� �������*/
	Max=(c>Max)?c:Max;/*�������� ��� ������� ������ ��� ����� �� ��� �����*/
	
		printf ("\n� ����������� ������� ����� � %d ��� �������" ,Max , Max_th);
		Max_th=a;/*������� ���� ���� ����� ������*/
		Max_th=b;/*������� ���� ����  ������� ������*/
		Max_th=c;/*������� ���� ���� ����� ������*/
	
		
	Max_th=(Max>a)?a:printf(" 1��");/*����� ��� ������� ���� �� �������� ��� ������ ������� �� ��� �������, ��� ����� � ������ ��� �������*/

	Max_th=(Max>b)?b:printf(" 2��");/*����� ��� ������� ���� �� �������� ��� �������� ������� �� ��� �������, ��� ����� � �������� ��� �������*/
	
	Max_th=(Max>c)?c:printf(" 3��.");/*����� ��� ������� ���� �� �������� ��� ������ ������� �� ��� �������, ��� ����� � ������ ��� �������*/

	return 0;
}
