#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int digit;
	int sum = 0;
	while(x>0)
	{
		digit = x % 10;
		x /= 10;
		sum = sum * 10 +digit;
	}
	printf("%d\n",sum);
	return 0;
}
