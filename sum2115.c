#include<stdio.h>
int sum(int m,int n);
int main(){
	int m,n;
	
	int i;
	scanf("%d %d",&m,&n);

	sum(m,n);
	return 0;
}
int sum(int m,int n){
	int min,max,ret=0;
	int i;
	if(m < n){
		min = m;
		max = n;
	}else{
		min = n;
		max = m;
	}
	for(i=min;i<=max;i++){
		ret += i;
	}
	printf("%d\n",ret);
}
