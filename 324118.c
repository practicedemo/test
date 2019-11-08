#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int sum=1;
	int i;
	for(i=1;i<=x;i++)
	{
		sum *=i;
	}
	printf("!%d=%d\n",x,sum);
	return 0;
}
