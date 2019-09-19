#include <stdio.h>
int main ()
{
	int num;
	
	int figure;
	
	scanf("%d",&num);

	int a,b,c;

	a = num/100;
	b = num%100/10;
	c = num%10;
	
	figure = c*100+b*10+a;

	printf("%d\n",figure);

}
