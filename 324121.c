#include<stdio.h>
int main(){
	int x;
	int cnt = 1;
	scanf("%d",&x);
	while(x>9){
		x/=10;
		cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}
