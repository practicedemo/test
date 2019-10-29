#include<stdio.h>
int main()
{
	//生命变量
		int n;
	int factor =1;
	int i = 1;
	//取得数据
	scanf("%d",&n);
	//判断跳出循环条件
	while(i<=n)
	{
		factor *= i;//计算滋生乘于i的值
		i++;//i自增
	}
	//输出结果
	printf("!%d=%d\n",n,factor);
	return 0;
}
