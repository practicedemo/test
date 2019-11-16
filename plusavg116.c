#include<stdio.h>
int main(){
	int x;
	double avg;
	double sum = 0;
	int cnt = 0;
	int i;
	scanf("%d",&x);
	
	while(x!=-1){
		sum += x;
		cnt++;
		scanf("%d",&x);
	}
	avg = sum / cnt;
	printf("avg = %.1f\n",avg);
	return 0;

}
