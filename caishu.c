#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int number;
int count = 0;
int main()
{
	srand(time(0));
	int a = rand()%100;
	printf("我已经想好了一个1到100之间的数。\n");
	do{
		printf("请输入一个1到100之间数：\n");
		scanf("%d",&number);
		count++;
		if(number>a)
		{
			printf("你输入的数大了\n");
		}else if(number<a)
		{
			printf("你输入的数小了\n");
		}
	}while(number !=a);
	printf("太好了你输入的是%d电脑生成的数是%d你猜了%d次\n",number,a,count);
	return 0;
}
