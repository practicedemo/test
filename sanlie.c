#include<stdio.h>
int main()
{
	int x;
	int number = 10;
	int count[number];
	scanf("%d",&x);
	int i;
	
	for(i=0;i<number;i++)
	{
		count[i]=0;
	}

	while(x!=-1)
	{
		if(x>=0 && x<=9)
		{
			count[x]++;
		}
		scanf("%d",&x);
	}

	for(i=0;i<number;i++)
	{
		printf("%d %d\n",i,count[i]);

	}
	
	return 0;
}
