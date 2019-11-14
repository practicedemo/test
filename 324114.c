#include<stdio.h>
int main(){
	int x;
	int i;
	int sum = 1;
	scanf("%d",&x);
	for(i = 1;i<= x; i++){
		sum *=i;
	}
	printf("%d\n",sum);
	return 0;
}
