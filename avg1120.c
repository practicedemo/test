#include<stdio.h>

int main(){
	int x;
	int cnt = 0;
	int sum = 0;
	scanf("%d",&x);
	while(x!=-1){
		sum += x;
		cnt ++;
		scanf("%d",&x);
	}
	printf("avg = %d\n",sum/cnt);
	return 0;
}
