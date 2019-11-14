#include<stdio.h>
int main(){
	int x;
	int sum = 0;
	int cnt =0;
	scanf("%d",&x);
	while(x!=-1){
				
		sum += x;
		cnt++;
		scanf("%d",&x);
	}

	printf("%.1f\n",sum*1.0/cnt);
	return 0;
}
