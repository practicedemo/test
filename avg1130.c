#include<stdio.h>
int main(){
	int x;
	double sum = 0;
	int cnt = 0;
	int number[100];
	scanf("%d",&x);

	while (x != -1){
		number[cnt] = x;
		{
			int i;
			printf("%d ",cnt);
			for(i=0;i<=cnt;i++){
				printf("%d ",number[i]);
			}
			printf("\n");
		}
		sum+=x;
		cnt++;
		scanf("%d",&x);
	}
	
	double avg = sum/cnt;
	if(cnt>0){
	
		printf("avg = %.1f\n",avg);
		int i;
		for(i=0;i<cnt;i++){
			if(number[i]>avg){
				printf("%d\n",number[i]);
			}
		}
	}
	return 0;
}
