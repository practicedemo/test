#include<stdio.h>
int sum(int begin,int end){
	int i,ret=0;
	for(i=begin;i<=end;i++){
		ret += i;
	}
	printf("%d到%d的和为%d\n",begin,end,ret);
}
int main(){
	
		sum(1,10);
		sum(10,25);
		sum(35,45);

		return 0;
}
