#include<stdio.h>
int main(){
	int x;
	int i;
	for(x=2;x<100;x++)
	{
		int k;
		int isPrime = 1;
		for(k=2;k<x;k++)
		{
			if(x%k==0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime){
			printf("%d\n",x);
		}
	}
	
	return 0;
}
