#include<stdio.h>
int main()
{
	int n = 0;
	int x;
	scanf("%d",&x);

	do{
		
		x/=10;
		n++;
	}while(x>0);
	printf("是%d位数\n",n);
	return 0;
}
