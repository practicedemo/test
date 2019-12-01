#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	switch(x){
			case 1:
				printf("你好\n");
				break;
			case 2:
				printf("早上好\n");
				break;
			case 3:
				printf("中午好\n");
				break;
			case 4:
				printf("晚上好\n");
				break;
			case 5:
				printf("再见\n");
				break;
			default :
				printf("啊，什么？\n");
				break;
	}
}
