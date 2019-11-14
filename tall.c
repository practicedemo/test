#include<stdio.h>
int main()
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	double height = (a+b/12)*0.3048;
	printf("%.f尺%.f寸为 %.2f米\n",a,b,height);
}
