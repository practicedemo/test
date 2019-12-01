#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int ret = 0;
	while(x>0){
		int d = x%10;
		ret = ret *10 +d;
		x/=10;
	}
	printf("%d\n",ret);
}
