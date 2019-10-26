#include<stdio.h>
int main()
{
	int hour1,min1;
	int hour2,min2;
	printf("请输入第一个时间：\n");
	
	scanf("%d %d",&hour1,&min1);

	printf("请输入第一个时间：\n");

	
	scanf("%d %d",&hour2,&min2);

	int hour = hour2 - hour1;
	int min = min2 - min1;
	if(min<0)
	{
		min +=60;
		hour--;
	}
	printf("时间差为：%d小时%d分。\n",hour,min);
	return 0;
}
