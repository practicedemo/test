#include<stdio.h>
int main()
{
	int x;
	int count=0;
	double sum =0;
	scanf("%d",&x);
	while(x!=-1)
	{
		sum +=x;
		count++;
		scanf("%d",&x);
	}
	printf("avg=%lf\n",sum/count);
	return 0;
}
