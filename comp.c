#include<stdio.h>
int main()
{
	int a,b;
	
	int max = 0;
	
	printf("请输入两个整数\n");

	scanf("%d %d",&a,&b);

	if(a>b)
	{
		max = a;
	}else
	{
		max = b;
	}
	
	printf("最大的那个是%d\n",max);
}
