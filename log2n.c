#include<stdio.h>
int main(){
	int x;
	int cnt = 0;
	scanf("%d",&x);
	while(x>1){
		x/=2;
		cnt++;
	}
	printf(" log2 = %d",cnt);
	return 0;
}
