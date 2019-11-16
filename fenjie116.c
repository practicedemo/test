#include<stdio.h>
int main(){
	int x;
	int mask = 1;
	int cnt = 1;
	scanf("%d",&x);
	int t = x;

	while(x > 9){
		x /= 10;
		mask *= 10;
		cnt ++;
	}
	//printf("%d %d",cnt,mask);
	while(mask>0){
		int d = t / mask;
		
		printf("%d",d);
		if(t > 9){
			printf(" ");
		}
		t %= mask;
		mask /= 10;

	}
	printf("\n");
	return 0;

}
