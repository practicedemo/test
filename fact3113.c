#include<stdio.h>
#include<math.h>
int fact(int number,int m);
int main()
{
	int n;
	int i;
	int number =3;
	int result;
	
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		result = fact(number,i);
		printf("pow(%d,%d)=%d\n",number,i,result);
	}
}
int fact(int number,int m)
{
	int i;
	
	int ret = 1;
	for(i=1;i<=m;i++)
	{
		ret = pow(number,i);
	}
	return ret;
}
