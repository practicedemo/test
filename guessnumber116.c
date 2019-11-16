#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int a = rand()%100;
	int number;
	int cnt = 0;
	do{
		printf("请输入一个1-100之间的数\n");
		scanf("%d",&number);
		cnt++;
		if(number>a){
			printf("太大了\n");
		}else if(number<a){
			printf("太小了\n");
		}
	}while(a!=number);
	printf("写下的是%d输入的是%d共猜了%d次\n",a,number,cnt);
	return 0;
}
