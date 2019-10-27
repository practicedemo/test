#include<stdio.h>
int main()
{
	int num;
	int l = 1;
	scanf("%d",&num);

	if(num>999)
	{
		l =4;
	}else if(num>99)
	{
		l = 3;
	}else if(num>9)
	{
		l = 2;
	}
	printf("%d为%d位数\n",num,l);
	return 0;
}
