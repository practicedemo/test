#include<stdio.h>
int main()
{
	int x;
	double  sum =0;
	int cnt =0;
	int number[20];
	scanf("%d",&x);
	while(x!=-1)
	{
		number[cnt] = x;
		{
			int i;
			for(i=0;i<=cnt;i++)
			{
				printf("%d ",number[i]);
			}
			printf("\n");
		}
		sum +=x;
		cnt++;
		scanf("%d",&x);
	}
	if(cnt>0)
	{
		int i;
		double avg = sum/cnt;
		for(i=0;i<cnt;i++)
		{
			if(number[i]>avg)
			{
				printf("%d ",number[i]);
			}
		}
	}
	return 0;
}
