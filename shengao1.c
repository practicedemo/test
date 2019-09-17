#include <stdio.h>
int main ()
{
	double foot;
	double inch;

	printf("请输入身高 英尺 英寸""输入 \"5 7\" 为身高5英尺7英寸\n");

	scanf("%lf %lf",&foot,&inch);

	printf("您的身高为%f米\n",(foot+inch/12)*0.3048);

	return 0;
}
