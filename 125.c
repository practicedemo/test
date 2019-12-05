#include<stdio.h>
int main(){
	int a[5] = {0};
	int chengji;
	int count;
	int i;
	int cnt =0;
	int flag;
	scanf("%d",&count);
	while(cnt < count){
		scanf("%d",&chengji);
		cnt++;
			if(chengji >= 90){
				flag = 0;
				a[flag]++;
			}else if(chengji >= 80){
				flag = 1;
				a[flag]++;
			}else if(chengji >= 70){
				flag = 2;
				a[flag]++;
			}else if(chengji >= 60){
				flag = 3;
				a[flag]++;
			}else{
				flag = 4;
				a[flag]++;
			}
		}
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
		printf("%d",a[i]);
		if(i<sizeof(a)/sizeof(a[0])){
			printf(" ");
		}
	}
	printf("\n");

	return 0;
}
