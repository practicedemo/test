#include<stdio.h>
int main()
{
	
	int n;

	scanf("%d",&n);
	int fact = 1;

	
	int i =1;
	while(i<=n)
	{
		fact *= i;
		printf("fact现在为%d  i现在=%d\n",fact,i);
		i++;
		printf("i++后为=%d\n",i);
	}
	printf("%d!=%d\n",n,fact);

	return 0;
}
