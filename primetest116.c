#include<stdio.h>
int main(){
	int x;
	int i;
	scanf("%d",&x);
	int isPrime =1;
	for(i=2;i<x;i++){
		if(x%i==0){
			isPrime =0;
			break;
		}
	}
	if(isPrime){
		printf("是素数\n");
	}else if(isPrime == 0){
		printf("不是素数\n");
	}
	return 0;
}
