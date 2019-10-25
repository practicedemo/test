#include<stdio.h>
int main()
{
	const int AMOUNT;
	int price;
	printf("请输入金额和票面，空格隔开\n");
	scanf("%d %d",&price,&AMOUNT);

	int chang = AMOUNT - price;

	printf("找您%d元\n",chang);
	return 0;

}
