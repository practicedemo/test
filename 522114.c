#include<stdio.h>
int main()
{
	int one,two,five;
	int x;
	scanf("%d",&x);
	for(one=1;one<x*10;one++)
	{
		for(two=1;two<x*10/2;two++)
		{
			for(five=1;five<x*10/5;five++)
			{
				if(one+two*2+five*5==x*10)
				{
					printf("需要%d个1角%d个2角%d个5角得到%d元\n",one,two,five,x);
				}
			}
		}
	}
	return 0;
}
