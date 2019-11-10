#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int i;
	int sum = 1;
	for(i=1;i<=x;i++)
	{
		sum *=i;
	}
	printf("%d\n",sum);
	return 0;
}
