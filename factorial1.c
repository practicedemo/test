#include<stdio.h>
int main()
{
	int i = 1;
	int fact = 1;
	int n;

	scanf("%d",&n);

	while(i<=n)
	{
		fact *= i;
		i++;
	}

	printf("n! = %d\n",fact);
}
