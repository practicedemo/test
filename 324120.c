#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int i;
	int ret =1;
	for(i=1;i<=x;i++){
		ret *=i;
	}
	printf("%d\n",ret);
	return 0;
}
