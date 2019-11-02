#include<stdio.h>
int main()
{
	int x;
	int i;
	scanf("%d",&x);
	int factor = 1;
	for(i=1;i<=x;i++)
	{
		factor*=i;
	}
	printf("!%d=%d\n",x,factor);
	return 0;
}
