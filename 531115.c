#include<stdio.h>
int main()
{
	int a,b;
	int min;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		min =b;
	}else
	{
		min =a;
	}
	
	int i;
	int ret =0;
	for(i=1;i<min;i++)
	{
		if(a%i==0)
		{
			if(b%i==0)
			{
				ret =i;
			}
		}
	}
	printf("%d和%d最大公约数是%d。\n",a,b,ret);
	return 0;

}
