#include<stdio.h>
int main()
{
	double h,s;
	int low = 0;
	int up = 300;
	int step = 20;
	h = low;
	while(h <= up)
	{
		s = (5.0/9.0)*(h-32);
		printf("%3.0f %6.1f\n",h,s);
		h += step;
	}
	return 0;
}
