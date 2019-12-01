#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));
	int a = rand()%100;
	int x;
	int cnt = 0;
	do{
		printf("请输入1-100之间数\n");
		scanf("%d",&x);
		cnt++;
		if(x>a){
			printf("太大了\n");
		}else if(x<a){
			printf("太小了\n");
		}
	}while(x !=a);
	printf("猜对了，写下的是%d，输入的是%d，共猜了%d次\n",a,x,cnt);
	return 0;
}
