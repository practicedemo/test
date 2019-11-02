#include<stdio.h>
int main()
{
	int x;
	int ret =0;
	int n = 0;
	scanf("%d",&x);

	while(x != -1)
	{
		ret+=x;
		n++;
		scanf("%d",&x);
	}
	printf("%d\n",ret/n);
	return 0;
}
