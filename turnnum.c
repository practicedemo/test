#include<stdio.h>
int main ()
{
	int a,b,c;
	int num;
	scanf("%d",&num);
	c = num % 10;//各位
	b = num / 100;//百位
	a = num%100/ 10 ;//十位
	printf("%d %d %d\n",b,a,c);
	num = c*100+ a*10 +b;
	printf("num=%d\n",num);
	return 0;
}
