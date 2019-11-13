#include<stdio.h>
int main()
{
	int n;
	int i;
	double sum = 0;
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		sum +=1.0/i;
	}
	printf("%f\n",sum);
}
