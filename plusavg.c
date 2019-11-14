#include<stdio.h>
int main(){
	int x;
	int cnt = 0;
	int ret = 0;
	
	scanf("%d",&x);
	while(x!=-1){
		
		ret += x;
		cnt++;
		scanf("%d",&x);
		
	}
	int avg = ret / cnt;
	printf("plus = %d avg = %d\n",ret,avg);
	return 0;
}
