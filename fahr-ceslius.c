#include<stdio.h>
int main()
{
	int fahr,lower,upper;
	double ceslius;
	scanf("%d %d",&lower,&upper);

	int i;
	for(i=lower;i<=upper;i+=2)
	{
		
		ceslius = (5.0/9.0)*(i-32);
		printf("%d %6.1f\n",i,ceslius);
	}
	return 0;
}
