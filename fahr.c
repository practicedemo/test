#include<stdio.h>
int main()
{
	int fahr,begin,end;
	double celsius,ret;
	scanf("%d %d",&begin,&end);

	if(begin <= end)
	{
		printf("华氏 摄氏度\n");

		double i;
		for(i=begin;i<=end;i++)
		{
			ret = (5.0/9.0)*(i-32);
			printf("%4.0lf %6.lf\n",i,ret);
		}
	}
	return 0;

}
