#include <stdio.h>
#include <time.h>
#define size 100
int main(void)
{
	srand(time(NULL));
	system("chcp 1253");
	int i,r, sum, max, min;
	int pin[size];
	float mo;
	sum=0;


	for(i=0; i<size; i++)
	{
		r=rand()%(80-20+1)+20;
		printf(" %d \n", r);
		pin[i]=r;
		sum=sum+pin[i];
		mo=(double)sum/size;
	}
	max=pin[0];
	min=pin[0];
	for(i=1; i<size; i++)
	{
		if(pin[i]>max)
		{
			max=pin[i];
		
		}
		if(pin[i]<min)
		{
			min=pin[i];
		
		}
	}
	printf("MAX= %d\n", max);
	printf("MIN= %d\n", min);
	printf("AVG= %.2f\n", mo);
	
	return 0;
}
