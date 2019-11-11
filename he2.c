#include<stdio.h>

int sum(int begin,int end);
int main()
{
	sum(10,20);
	sum(30,35);
	sum(35,45);
	return 0;
}
int sum(int begin,int end)
{
	int sum=0;
	int i;
	for(i=begin;i<=end;i++)
	{
		sum += i;
	}
	printf("%d与%d的和是%d\n",begin,end,sum);
}
