#include<stdio.h>
int main()
{
	int a,b,c;
	int max;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			max=a;
		}else if(a<c)
		{
			max=c;
		}
	}else if(b>c)
	{
		max=b;
	}else if(c>b)
	{
		max =c;
	}
	printf("%d\n",max);
	return 0;
}
