#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int sign = -1;
	int i;
	int sum = 0;
	int d =1;
	for(i=1;i<=x;i+=3){
		sum +=1/(i*sign);
		printf("%d %d\n",i,sum);
		sign = -sign;
	}
	//printf("%d\n",sum);
}
