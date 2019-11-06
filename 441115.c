#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a = rand()%100;
	int count =0;
	int x;
	do{
		printf("我已经写下一个属，请输入1至100之间的数。\n");
		scanf("%d",&x);
		count++;
		if(x>a)
		{
			printf("太大了\n");
		}else if(x<a)
		{
			printf("太小了\n");
		}

	}while(x!=a);
	printf("太好了，写下的是%d输入的是%d共猜了%d次\n",a,x,count);
	return 0;
}
