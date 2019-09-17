#include <stdio.h>
int main()
{
	int hour1,min1;

	int hour2,min2;

	scanf("%d %d",&hour1,&min1);

	scanf("%d %d",&hour2,&min2);

	int time1 = hour1 * 60 + min1;

	int time2 = hour2 * 60 + min2;

	int hour = (time1 - time2) / 60;

	int min = (time1 - time2) % 60;
	
	printf("时间差为 %d 小时 %d 分钟\n",hour,min);

	return 0;

}
