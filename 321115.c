#include<stdio.h>
int main()
{
	int x;
	int count =1;
	scanf("%d",&x);
	while(x/10>0)
	{
		x/=10;
		count++;
	}
	printf("%d",count);
	return 0;
