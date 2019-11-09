#include<stdio.h>
int main()
{
	//定义变量
	const int number = 10;
	int x;
	int count[number];
	int i;
	scanf("%d",&x);
	//循环清空数组
	for(i = 0; i < number; i++)
	{
		count[i]=0;
	}
	//循环计数
	while(x!=-1)
	{
		if(x>=0 && x<=9)
		{
			count[x]++;
		}
		scanf("%d",&x);
	}
	//循环输出结果
	for(i=0;i<number;i++)
	{
		printf("%d:%d\n",i,count[i]);
	}
	return 0;

}
