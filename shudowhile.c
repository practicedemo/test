#include<stdio.h>
int main()
{
	int n = 0;
	int x;
	scanf("%d",&x);

	do{
		n++;
		x/=10;
	}while(x>0);
	printf("是%d位数\n",n);
	return 0;
}
