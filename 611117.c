#include<stdio.h>
int main()
{
	int x,n;
	int cnt=0;
	double sum =0;
	printf("将要输入多少个数字？\n");
	scanf("%d",&n);
	int number[n];
	while(x!=-1)
	{
		number[cnt]=x;
		cnt++;
		sum +=x;
		scanf("%d",&x);
	}if(cnt>0)
	{	
		int avg = sum/cnt;
		int i;
		for(i=0;i<cnt;i++)
		{
			if(number[i]>avg)
			{
				printf("%d ",number[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
