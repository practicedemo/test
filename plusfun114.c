#include<stdio.h>


int main(){
	int x;
	double sum = 0;
	int sign =-1;
	scanf("%d",&x);
	double i ;
	for(i=1;i<=x;i++)
	{
		sign = -sign;
		sum +=1/(sign*i);

	}
	printf("%f",sum);
	return 0;
}
