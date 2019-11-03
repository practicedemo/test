#include<stdio.h>
int main()
{
	int x;
	int count=0;
	scanf("%d",&x);

	if(x==0)
	{
		count++;
	}else
	{
		while(x!=0)
		{
			x/=10;
			count++;
		}
	}
	printf("是%d位数\n",count);
	return 0;
}
