#include<stdio.h>
int isPrime(int i);
int main(){
	int m,n;
	int sum = 0;
	int i;

	scanf("%d %d",&m,&n);
	if(m==1)m=2;
	for(i=m;i<=n;i++){
		if(isPrime(i)){
			sum +=i;
		}
	}
	printf("%d\n",sum);
	return 0;
}
int isPrime(int i){
	int k;
	int ret = 1;
	for(k=2;k<i-1;k++){
		if(i%k==0){
			ret = 0;
			break;
		}
	}
	return ret;
}
