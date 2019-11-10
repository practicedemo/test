#include<stdio.h>
int main()
{
	int a,b;
	int min,ret;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		min = b;
	}else
	{
		min = a;
	}
	int i;
	for(i=2;i<min;i++)
	{
		if(a%i==0)
		{
			if(b%i==0)
			{
				ret =i;
			}
		}
	}
	printf("gcd=%d\n",i);
	return 0;
}
