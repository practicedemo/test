#include<stdio.h>
int main(){
	int x;
	scanf( "%d", &x );
	int cnt = 0;
	double sum = 0;
	int number[100];	
	while(x != -1){
		number[cnt] = x;
		sum += x;
		cnt++;
		scanf("%d",&x);
	}

	if(cnt > 0){
		printf("avg = %.2f\n",sum/cnt);
		int i;
		for(i=0;i<cnt;i++){
			if(number[i]>sum/cnt){
				printf("%d\n",number[i]);
			}
		}
	}
	return 0;
}
