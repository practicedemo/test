#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int cnt = 0;
	while(x>1){
		x /=2;
		cnt++;
	}
	printf("log2 =%d",cnt);
	return 0;
}
