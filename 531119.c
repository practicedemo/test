#include<stdio.h>
int main()
{
	int x;
	double sum =0;
	double i;
	scanf("%d",&x);

	for(i=1;i<=x;i++)
	{
		sum += 1/i;

	}
	printf("%f\n",sum);
	return 0;
}
