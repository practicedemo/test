#include<stdio.h>
int main()
{
	int n;
	int fact =1;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		fact *=i;
	}
	printf("!%d=%d\n",n,fact);
	return 0;
}
