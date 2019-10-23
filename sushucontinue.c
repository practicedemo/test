#include<stdio.h>
int main(){
	int x=9;
	int isPrime = 1;
	int i ;
	for(i=2;i<x;i++){
		if(x % i == 0){
			isPrime =0;
			continue;
		}
		printf("%d\n",i);
	}
	if(isPrime == 0){
		printf("不是素数");
	} else {
		printf("是素数");
	}
	return 0;
}
