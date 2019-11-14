#include<stdio.h>
int main(){
	int x;
	int cnt = 1;
	int mask = 1;
	scanf("%d",&x);
	int t =x;
	while(x>9){
		x/=10;
		mask*=10;
		cnt++;
	}
	while(mask>0){
		int d = t/mask;
		printf("%d",d);
		if(mask>9){
			printf(" ");
		}
		t%=mask;
		mask/=10;
	}
	printf("\n");
	return 0;

}
