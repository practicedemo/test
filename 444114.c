#include<stdio.h>
int main()
{
	int x;
	int digit;
	scanf("%d",&x);
	while(x!=0)
	{
		digit = x%10;
		printf("%d",digit);
		x/=10;
	}
	printf("\n");
	return 0;
}
