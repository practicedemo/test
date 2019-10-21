#include<stdio.h>
int main ()
{
	int a;

	printf("请输入一个数\n");

	scanf("%d",&a);

	if(a>999)
	{
		a = 4;
	}else if (a>99)
	{
		a = 3;
	}else if (a>9)
	{
		a =2;
	}else
	{
		a = 1;
	}
	printf("a是%d位数\n",a);

	return 0;
}
