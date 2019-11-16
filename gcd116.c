#include<stdio.h>
int main(){
	int m,n,t;
	scanf("%d %d",&m,&n);
	while(n!=0){
		t= m % n;
		m = n;
		n = t;
	}
	printf("gcd = %d\n",m);
	return 0;
}
