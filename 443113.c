#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a = rand()%100;
	int count=0;
	int number;

	while(number !=a){
		printf("我已经写下一个数，请输入1至100之间数。\n");
		scanf("%d",&number);
		count++;
		if(number>a)
		{
			printf("输入的数大了\n");
		}else if(number<a)
		{
			printf("输入的数小了\n");
		}
	
	}
	printf("写下的数是%d输入的数是%d，共猜了%d次。\n",a,number,count);
	return 0;

}
