#include<stdio.h>

int sum(int m,int n);
int main(){
	int m,n;
	
	sum(1,10);
	sum(20,30);
	sum(35,45);

	return 0;
}
int sum(int m,int n){
	int max,min,i;
	int ret = 0;
	if(m>n){
		max = m;
		min = n;
	}else{
		max = n;
		min = m;
	}
	for(i = min;i <= max; i++){
		ret +=i;
	}
	printf("%d\n",ret);
}
