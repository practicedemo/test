#include<stdio.h>
int fact( int n);
int main()
{
	int n;
	int i;
	int result;
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		result = fact(i);
		printf("%d! = %d\n",i,result);
	}
	
	
}
int fact(int m)
{
	int i;
	int sum =1;
	for(i=1;i<=m;i++)
	{
		sum *=i;
		
	}
	return sum;
	
}
