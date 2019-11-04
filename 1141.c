#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int count=1;
	

	while(x/10>0)
	{
		x/=10;
		count++;
	}
	printf("%d\n",count);
	return 0;
}
