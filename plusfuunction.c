#include<stdio.h>
int sum(int a,int b);
int main(){
	

	sum(1,10);
	sum(20,30);
	sum(35,45);
	return 0;
}
int sum (int a, int b){
	int max,min;
	int i;
	int ret = 0;
	if(a>b){
		max = a;
		min = b;
	}else{
		max = b;
		min = a;
	}
	for(i = min; i <= max; i++){
		ret += i;
	}
	printf("%d\n",ret);
}
