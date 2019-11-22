#include<stdio.h>
int max(int a[],int len){
	int maxid = 0;
	for(int i=0;i<len;i++){
		if(a[i]>a[maxid]){
			maxid = i;
		}
	}
	return maxid;
}
int main(){
	int amount[] = {1,2,3,4,5,12,34,23,35,56,34,22,11};
	int len = sizeof(amount)/sizeof(amount[0]);
	//int maxid = max(amount, len );
	//printf("%d = %d\n",maxid,amount[maxid]);
	for(int i=len-1;i>0;i--){
		int maxid = max(amount,i+1);
		int t = amount[maxid];
		amount[maxid] = amount[i];
		amount[i]= t;


	}
	for(int i=0;i<len;i++){
		printf("%d ",amount[i]);
	}
	printf("\n");
	return 0;
}
