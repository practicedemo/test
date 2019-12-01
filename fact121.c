#include<stdio.h>
int main(){
	int x,i;
	scanf("%d",&x);
	int fact =1;
	for(i=1;i<=x;i++){
		fact *=i;
	}
	printf("!n = %d\n",fact);
}
