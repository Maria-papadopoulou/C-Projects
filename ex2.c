#include <stdio.h>
#include <math.h>

int menu(int, int);
float Func_1(int, int);
int Func_2(int , int);
int Func_3(int,int);
float mypower(int, int);//������
int myfactor(int);//�����������
int comb(int, int);//����������

int main(int argc, char **argv)
{
	system ("chcp 1253");
	int a, b;
	printf("�������� ��� 1� ������: \n");
	scanf ("%d", &a);
	printf("�������� ��� 2� ������: \n");
	scanf ("%d", &b);
	mymenu (a,b);
	printf("\n");
	printf (". . . ������");

}
int mymenu(int a, int b)
{
	int choice ,sumch;
	sumch=0;
	do
	
	{
		system ("cls"); //���������� ������
		printf("������ ����� ��������.\n");
		printf("**************************\n\n");
		printf("1.����������� ��� ������� �^�.\n\n");
		printf("2.����������� �! ��� �!\n\n");
		printf("3.����������� ��� ������� ��� ���������� � ��� �.\n\n");
		printf("4.������ ��� �� �����!\n\n");
		printf("������� ��������: ");
		scanf ("%d", &choice);
		sumch=sumch+1;//�������� ��������
		printf("\n������ �������� %d ��������.\n\n" ,sumch);
		switch (choice)
		{
		case 1: Func_1(a,b); break;
		case 2: Func_2(a,b); break;
		case 3: Func_3(a,b); break;
		}	
}
while (choice!=4);
}
//�������� ��������
	float Func_1(int a, int b)
	{
		system("cls");
		float p;
		p=mypower(a,b);
		printf("����������� �������\n");
		
		if(a>0 && b>0)
		{
		printf("%d^%d= %.1lf\n",a,b ,p);
		}

	else if(a<0 && b>0)
		{
			printf("(%d)^%d= %.1lf\n", a,b,p);
		}
		else if(a<0 && b<0)
		{
			printf("(%d)^(%d)=%.1lf\n", a,b,p);
		}
		else if(a>0 && b<0)
		{
			printf("%d^(%d)= %.1lf\n", a,b, p);
		}
		else 
		{
			printf("%d ^ %d=1\n", a,b);
		}
		system ("pause");
}
//����������� �������
float mypower(int a, int b)
{
int j;
float p;
if (a==0)
	p=0;
else
{
	if (b==0)
		p=1;
		else
		{
			if (b>0)
				for (j=1, p=1; j<=b; j++)
				p*=a;
				else
				{
					for (j=-1, p=1; j>=b; j--)
					{
						p*=a;
					}
					p= (float)1/a;
					
				}
			
		}
	}
	return p;
}


//�������� ������������	
int Func_2(int a, int b)
{
	system ("cls");

	int res1,res2;
	res1=myfactor(a);
	res2=myfactor(b);
if(a>0 && b>0 )
	{
	printf("����������� �! ��� �!\n");
	
	printf("%d! = %d\n",a,res1);
	printf("%d! = %d\n",b, res2);
}
if(a<0 && b>0)
{
	printf("����������� ��� �!.\n");
	printf("%d! = %d\n", b, res2);
	printf("�� �! ��� �����������, ����� ����� ��������� �������.\n");
}
if(a>0 && b<0)
{
	printf("����������� ��� �!.\n");
	printf("%d! = %d\n", a, res1);
	printf("To B! ��� �����������, ����� ����� ��������� �������.\n");
}
 if(a<0 && b<0)
 {
 printf("����������� �! ��� �!\n");
printf("��� ����� ������ � ����� �� ���������� ��������\n");
}
system("pause");
}
//����������� ������������
int myfactor(int n)
{
	int i,p;
	p=1;
	for(i=1; i<=n; i++)
		p*=i;

return p;

    	
system("pause");
}

//�������� ���������� � ��� �
int Func_3(int a, int b)
{
	system ("cls");
	int y;
	y=mycomb(a,b);
	printf("���������� %d ��� %d.\n", a, b);
	if(a>=b && a>0 && b>0)
	{
	printf("%d\n", y);	
}
	if(a<b)
	{
	printf("��� ����� ������ � �������� ������������� ����� %d < %d\n",a,b, a,b);
}

	if(a<0 && b>0)
	{
	
	printf("��� ����� ������ � �������� ��� ������ ����� ������� ��������� �������\n");
}
	if(a>0 && b<0)
	{

	printf("��� ����� ������ � �������� ��� ������ ����� ������� ��������� �������\n");
}
if(a<0 && b<0)
{
		printf("��� ����� ������ � �������� ��� ������ ����� �������� ��������� �������.\n");
}

	system ("pause");
}

//����������� ����������
int mycomb(int a, int b)
{
system ("cls");
int result,y,d;

d=a-b;
y=myfactor(d);
result = myfactor(a)/(myfactor(b)*y);

	return result;

system ("pause");
}
