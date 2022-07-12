#include <stdio.h>
void TowerofHanoi(int, char, char, char);
int main(int argc, char **argv)
{
	system("chcp 1253");
	printf("\n\t������ ��� HANOI\n");
	int dis;
	printf("�������� ��� ������ ������ ��� ����������: ");
	scanf("%d", &dis);
	TowerOfHanoi(dis,'A', 'C', 'B');
	return 0;
}
void TowerOfHanoi(int dis,char start,char end,char tmp) /*dis=������� ������*/
															/*start=1�� �������(�������)*/
															/*tmp=2�� �������(���������� ��� �� ����������� �� ������ ���� 3� ������)*/
															/*end=3�� �������(����������)*/
{

	if (dis==1)
	{

		printf("\n�������� ��� 1� ����� ��� %c ��� %c.\n", start, end);
		return;
	}
	TowerOfHanoi(dis-1, start, tmp, end);
	printf("\n�������� ��� %d� ����� ��� �� %c ���� %c.\n", dis, start, end);
	TowerOfHanoi(dis-1, tmp, end,start);
}
