#include<stdio.h>
int main()
{
	int a;
	int ou=0;
	int ji=0;
	while(scanf("%d",&a))
	{
		if(a == -1)
		{
			break;
		}else if(a%2 == 0)
		{
			ou++;
		}else{
			ji++;
		}
	}
	printf("%d %d",ji,ou);
	return 0;
}
