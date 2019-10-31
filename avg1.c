#include<stdio.h>
int main()
{

	int sum = 0;
	int count=0;
	int number;
	scanf("%d",&number);
	do{
		if(number != -1)
		{			
			sum +=number;
			count++;
			scanf("%d",&number);
		}
	}while(number != -1);
	int avg = sum/count;
	printf("%d\n",avg);
}
