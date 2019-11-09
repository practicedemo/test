#include<stdio.h>
int main()
{
	int x;
	int cnt = 0;
	scanf("%d",&x);
	while(x>1)
	{
		x/=2;
		cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}
