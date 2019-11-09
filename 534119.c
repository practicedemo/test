#include<stdio.h>
int main()
{
	int x,n;
	int ret = 0;
	int digit;
	scanf("%d",&x);
	while(x>0)
	{
		digit = x%10;
		x/=10;
		ret = ret *10 +digit;
	}
	n=ret;
	while(n>0)
	{
		digit = n % 10;
		n /= 10;
		printf("%d ",digit);
	}
	printf("\n");
	return 0 ;
}
