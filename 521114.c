#include<stdio.h>
int main()
{
	int x;
	int i;
	for(i=2;i<100;i++)
	{
		int n;
		int isPrime =1;
		for(n=2;n<i;n++)
		{
			if(i%n==0)
			{
				isPrime =0;
				break;
			}
		}
		if(isPrime == 1)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
