#include<stdio.h>
int main()
{
	int x;
	int sum = 0;
	int i;
	int digit = 0;
	scanf("%d",&x);
	while(x>0)
	{
		digit = x%10;
		x/=10;
		sum = sum * 10 + digit;
	}
	printf("%d\n",sum);
	return 0;
}
