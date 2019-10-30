#include<stdio.h>
int main()
{
	int type;
	scanf("%d",&type);
	if(type  == 1 )
	{
		printf("你好\n");
	}else if(type == 2 )
	{
		printf("早上好\n");
	}else if(type == 3)
	{
		printf("晚上好\n");
	}else if(type == 4)
	{
		printf("再见\n");
	}else
	{
		printf("啊，什么\n");
	}
	return 0;
}
