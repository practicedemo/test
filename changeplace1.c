#include <stdio.h>
int main ()
{
	int a,b,c;
	
	printf("请输入两个整数空格隔开\n");
	
	scanf("%d %d",&a,&b);
	
	c =a;

	a =b;
	
	b =c;
	
	printf("a为%d,b为%d\n",a,b);
	
	return 0;
}
