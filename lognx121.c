#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int cnt = 0;
	while(x/2 !=0){
		x/=2;
		cnt++;
	}
	printf("%d\n",cnt);
}
