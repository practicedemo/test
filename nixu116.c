#include<stdio.h>
int main(){
	int x;
	int sum = 0;
	int ret = 0;
	scanf("%d",&x);
	while(x>0){
		int t = x % 10;
		x/=10;
		ret = ret*10 + t;
	}
	printf("%d\n",ret);
}
