#include<stdio.h>
int main()
{
	int bjt,utc;
	scanf("%d",&bjt);

	if(bjt<800)
	{
		utc = bjt+1600;
		printf("%d\n",utc);
	}else if(bjt>=800)
	{
		utc = bjt - 800;
		printf("%d\n",utc);
	}
	return 0;
}
