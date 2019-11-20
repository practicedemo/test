#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));
	int number = rand()%100;
	int x;
	int cnt = 0;
	
	do{
		printf("写下了一个数，请输入1-100之间数\n");
		scanf("%d",&x);
		cnt++;
		if(x>number){
			printf("太大了\n");
		}else if(x<number){
			printf("太小了\n");
		}

	}while(x!=number);
	printf("太好了，写下的是%d输入的是%d一共猜了%d次\n",number,x,cnt);
	return 0;
}
