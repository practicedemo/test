#include<stdio.h>
int main()
{
	int x;
	int i,d;
	scanf("%d",&x);
	d=x;  				//原数据赋值给d，便于结果输出表达。
	int number=0;
	`do
	{
		number++;
		x/=10;
	}while(x>0);
	printf("%d是%d位数。\n",d,number);
}
