#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int a = rand()%100;
	int cnt = 0;
	int x;
	do{
		printf("我已经写下一个数，请输入1-100直接的数\n");
		scanf("%d",&x);
		cnt++;
		if(x>a){
			printf("太大了\n");
		}else{
			printf("太小了\n");
		}
	}while(x!=a);

	printf("太好了写下d的是%d输入的是%d共猜了%d次\n",a,x,cnt);
	return 0;
}
