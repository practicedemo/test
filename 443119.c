#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a = rand()%100;
	int x;
	int cnt = 0;
	while(x!=a)
	{
		printf("请输入1-100之间的数：\n");
		scanf("%d",&x);
		cnt++;
		if(x>a)
		{
			printf("太大了\n");
		}else if(x<a)
		{
			printf("太小了\n");
		}
	}
	printf("太好了，写下的是%d输入的是%d共猜了%d次\n",a,x,cnt);
	return 0;
}
