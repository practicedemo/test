#include<stdio.h>
int main(){
	int price;
	int bill;
	printf("请输入金额：\n");
	scanf("%d",&price);
	printf("请输入票面：\n");
	scanf("%d",&bill);
	if(bill<price){
		printf("钱不够\n");
	}else{
		printf("找您%d元\n",bill-price);
	}
	return 0;
}
