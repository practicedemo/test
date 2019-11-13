#include<stdio.h>
int main()
{
	int n;
	int i;
	double sum = 0;
	int sign = 1;
	scanf("%d",&n);
	for(i=1;i<=n;i+=3)
	{
		sum +=sign*(1.0/i);
		sign = -sign;
	}
	printf("%f\n",sum);
}
