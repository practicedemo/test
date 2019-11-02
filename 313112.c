#include<stdio.h>
int main()
{
	int x,y;
	int ret = 0;
	int i;
	int ispRrime=1;
	int last;

	for(x=2;x<=200;x++)
	{
		for(y=2；y<=200;y++)
		{
			if(x%y==0)
			{
				isPrime = 0;
				break;
			}
		}
	}
	if(isPrime == 1)
	{
		ret += x;
		last++;
		if(last == y-x)
				(break;)
	}
	printf("%d",ret);
	return 0;
}
