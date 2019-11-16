#include<stdio.h>
int main(){
	int x;
	int i;
	for(i=2;i<100;i++){
		int k;
		int isPrime =1;
		for(k=2;k<i;k++){
			if(i%k==0){
				isPrime =0;
				break;
			}
		}
	
		if(isPrime = 1){
			printf("%d\n",i);
		}
	}
	return 0;
	
}
