#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int n =0;
	n++;
	x/=10;
	while(x>0)
	{
		n++;
		x/=10;
	}
	printf("%d位数",n);
	return 0;
}
