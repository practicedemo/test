#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a = rand()%100;
	int count = 0;
	int number;
	do
	{
		printf("我已经想好了一个随机数，请输入一个1到100之间的数。\n");
		scanf("%d",&number);
		count++;
		if(number<a)
		{
			printf("数太小了。\n");
		}else if(number>a)
		{
			printf("数太大了。\n");
		}
	}while(number != a);
	printf("太好了，你输入的是%d生成的是%d，共猜了%d次。\n",number,a,count);
}
