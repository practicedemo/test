#include<stdio.h>
int main()
{
	int n;
	int factor = 1;
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factor *= i;
	}
	printf("!%d=%d\n",n,factor);
	return 0;
}
