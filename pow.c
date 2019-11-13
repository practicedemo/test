#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	int power= 0;
	
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		power = pow(2,i);
		printf("pow(2,%d)=%d\n",i,power);
	}
}
