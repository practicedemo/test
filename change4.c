#include<stdio.h>
int main()
{
	int price = 0;
	int bill = 0;
	//输入金额和票面
	printf("请输入金额：\n");
	scanf("%d",&price);

	printf("请输入票面：\n");
	scanf("%d",&bill);

	if(bill>=price)
	{
		printf("应该找您%d元\n",bill-price);
	}else
	{
		printf("您的钱不够。\n");
	}
	return 0;
}
