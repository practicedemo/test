#include<stdio.h>
int main()
{
	int i,n;
	int sum =1;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		sum *=i;
	}
	printf("%d\n",sum);
	return 0;
}
