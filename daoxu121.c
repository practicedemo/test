#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int ret =0;
	while(x >0){
		int d = x % 10;
		
		printf("%d",d);
		x/=10;
	}
	printf("\n");
}
