#include<stdio.h>
int main()
{
	int x;
	double sum = 0.0;
	int i;
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		sum += 1.0/i;
	}
	printf("%f\n",sum);
	return 0;
}
