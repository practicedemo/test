#include<stdio.h>
int main()
{
	int x;
	int i;
	int ret=0;
	scanf("%d",&x);
	int t =x;
	while(x>1)
	{
		x/=2;
		ret++;
	}
	printf("log2x=%d\n",ret);
	return 0;
}
