#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int cnt = 0;
	double sum = 0;
	while(x != -1){
		sum+=x;
		cnt++;
		scanf("%d",&x);
	}
	double avg = sum/cnt;
	printf("avg = %.1f\n",avg);
	return 0;
}
