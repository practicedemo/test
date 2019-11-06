#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a = rand()%100;
	int number;
	int count = 0;
	do
	{
		printf("我写下了一个数，请输入一个1至100h之间的数\n");
		scanf("%d",&number);
		count++;
		if(number<a)
		{
			printf("太小了\n");
		}else if(number>a)
		{
			printf("太大了\n");
		}
	}while(number!=a);
	printf("太好了写下的是%d输入的是%d共猜了%d次\n",a,number,count);
	return 0;

}
