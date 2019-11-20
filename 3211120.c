#include<stdio.h>

int main(){
	int x;
	
	scanf("%d",&x);
	int cnt =1;
	while(x>9){
		x/=10;
		cnt++;
	}
	printf("%d\n",cnt);
}
