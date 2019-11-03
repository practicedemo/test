#include<stdio.h>
int main()
{
	int x;
	int sum=0;
	int i=0;
	scanf("%d",&x);

	while(x!=-1)
	{
		sum +=x;
		i++;
		scanf("%d",&x);
	}
	printf("%lf\n",1.0*sum/i);
	return 0;
}
