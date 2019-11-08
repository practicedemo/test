#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int a = rand()%100;
	int x;
	int cnt = 0;
	do
	{
		printf("我写下了一个数请输入1至100之间数：\n");
		scanf("%d",&x);
		cnt++;
		if(x>a)
		{
			printf("数太大了\n");
		}else
		{
			printf("数太小了\n");
		}
	}while(x!=a);
	printf("太好了写下的是%d输入的是%d共猜%d次\n",a,x,cnt);
	return 0;

}
