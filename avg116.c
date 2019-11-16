#include<stdio.h>
int main(){
	int x;
	double sum = 0;
	double cnt = 0;
	scanf("%d",&x);
	while(x!=-1){
		cnt++;
		sum +=x;
		scanf("%d",&x);
	}
	printf("avg = %.1f\n",sum/cnt);
}
