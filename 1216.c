#include<stdio.h>
int main(){
	const int number = 10;
	int x,i;
	int a[number];
	for(i=0;i<number;i++){
		a[i]=0;
	}
	scanf("%d",&x);
	while(x!=-1){
		if(x>=0 && x<=9){
			a[x]++;
		}
		scanf("%d",&x);
	}
	for(i=0;i<number;i++){
		printf("%d : %d\n",i,a[i]);
	}

	return 0;

}
