#include <stdio.h>
int main ()
{
	int foot;
	int inch;

	printf("请输入身高 英尺 英寸""输入 \"5 7\" 为身高5英尺7英寸\n");

	scanf("%d %d",&foot,&inch);

	printf("您的身高为%f米\n",(foot+inch/12.0)*0.3048);

	return 0;
}
