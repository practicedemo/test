#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int ret = 0;
	int digit;
	while(x!=0)
	{
		digit = x%10;
		x/=10;
		ret = ret *10+digit;
	}
	printf("%d\n",ret);
	return 0;
}
