#include<stdio.h>
int main()
{
	int a,b;
	int max;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		max = a;
	}else
	{
		max = b;
	}
	printf("大的那个是%d\n",max);
}
