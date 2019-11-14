#include<stdio.h>


int main(){
	int x;
	double sum = 0;
	scanf("%d",&x);
	double i ;
	for(i=1;i<=x;i++)
	{
		sum +=1/i;
	}
	printf("%f",sum);
	return 0;
}
