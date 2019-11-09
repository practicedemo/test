#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);

	int count = 0;
	int ret = 0;
	int number[20];
	while(x!=-1)
	{
		number[count] = x;
		ret += x;
		count++;
		scanf("%d",&x);
	}
	if(count>0)
	{
		printf("avg=%d\n",ret/count);
		int i;
		for(i=0;i<count;i++)
		{
			if(number[i]>ret/count)
			{
				printf("%d\n",number[i]);
			}
		}
	}
	return 0;
}
