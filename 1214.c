#include<stdio.h>
int main(){
	int x,i;
	int a[10];
	for(i=0;i<=9;i++){
		a[i]=0;
	}
	scanf("%d",&x);
	while(x!=-1){
		a[x]++;
		scanf("%d",&x);
	}
	for(i=0;i<=9;i++){
		printf("%d : %d\n",i,a[i]);
	}

	return 0;

}
