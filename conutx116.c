#include<stdio.h>

int main(){
	const int size = 20;
	int number[size];
	int i;
	int x;
	scanf("%d",&x);
	for(i=0;i<size;i++){
		number[i]=0;
	}

	while(x!=-1){
		if(x>=0 && x<=9){
			number[x]++;
		}
		scanf("%d",&x);
	}

	for(i=0;i<size;i++){
		printf("%d:%d\n",i,number[i]);
	}
	return 0;






}
