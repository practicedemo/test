#include<stdio.h>
int main()
{
	int x;
	int ret =0;
	scanf("%d",&x);
	while(x!=-1)
	{
		ret +=x;
		scanf("%d",&x);
	}
	printf("%d\n",ret);
	return 0;
}
