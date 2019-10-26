#include<stdio.h>
int main()
{
	int h,time;
	int h1,time1;
	int h2,time2;

	printf("请输入时间1：\n");

	scanf("%d %d",&h1,&time1);

	printf("请输入时间2：\n");

	scanf("%d %d",&h2,&time2);

	int t1 = h1 * 60 + time1;
	int t2 = h2 * 60 + time2;
	int t = t2 - t1;
	
	printf("时间差是%d 小时 %d分。\n",t/60,t%60);

	return 0;
}
