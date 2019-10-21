#include<stdio.h>
int main()
{
	//初始化
	int price = 0;
	int bill = 0;
	//输入票面及金额
	printf("请输入金额\n");
	scanf("%d",&price);
	printf("请输入票面\n");
	scanf("%d",&bill);
	//计算找零
	if(bill>=price)
	{
		printf("找您：%d\n",bill-price);
	}else
	{
		printf("你的钱不够\n");
	}
	return 0;
}
