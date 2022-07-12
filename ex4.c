#include <stdio.h>
void TowerofHanoi(int, char, char, char);
int main(int argc, char **argv)
{
	system("chcp 1253");
	printf("\n\tΠύργοι του HANOI\n");
	int dis;
	printf("Εισάγετε τον αριθμό δίσκων που επιθυμείτε: ");
	scanf("%d", &dis);
	TowerOfHanoi(dis,'A', 'C', 'B');
	return 0;
}
void TowerOfHanoi(int dis,char start,char end,char tmp) /*dis=αριθμός δίσκων*/
															/*start=1ος πάσαλος(αρχικός)*/
															/*tmp=2ος πάσαλος(βοηθητικός για να μεταφερθούν οι δίσκοι στον 3ο πάσαλο)*/
															/*end=3ος πάσαλος(τελευταίος)*/
{

	if (dis==1)
	{

		printf("\nΜετακινώ τον 1ο δίσκο από %c στο %c.\n", start, end);
		return;
	}
	TowerOfHanoi(dis-1, start, tmp, end);
	printf("\nΜετακινώ τον %dο δίσκο από το %c στον %c.\n", dis, start, end);
	TowerOfHanoi(dis-1, tmp, end,start);
}
