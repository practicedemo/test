#include<stdio.h>
int main()
{
	int x;
	double sum =0.0;
	int count =0;
	scanf("%d",&x);
	while(x!=-1)
	{
		count++;
		sum +=x;
		scanf("%d",&x);
	}
	printf("%lf",sum/count);
}
