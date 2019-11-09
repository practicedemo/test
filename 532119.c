#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int min;
	int i,ret;

	if(a>b)
	{
		min = b;
	}else
	{
		min = a;
	}
	for(i=1;i<min;i++)
	{
		if(a%i==0)
		{
			if(b%i==0)
			{
				ret = i;
			}
		}
	}
	
	printf("gcd = %d\n",ret);
	return 0;
}
