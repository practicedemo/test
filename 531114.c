#include<stdio.h>
int main()
{
	int i,n;
	double sum;
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		sum+= 1.0/i;

	}
	printf("f(%d)=%lf",n,sum);
	return 0;
}
