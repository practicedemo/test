#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int count =0;
	count++;
	while(x/10>0)
	{
		x/=10;
		count++;
	}
	printf("%d\n",count);
	return 0;
}
