#include<stdio.h>
int fact(int n);
int main(){
	int m1,n1;
	scanf("%d %d",&m1,&n1);
	int t1=m1,t2=n1;
	int n = fact(n1);
	int m = fact(m1);
	int o = fact(n1-m1);
	double result = n/(m*o);
	printf("result = %.f\n",result);
}
int fact(int n){
	int i;
	int fact = 1;
	for(i=1;i<=n;i++){
		fact *= i;
	}
	return fact;
}
