#include<stdio.h>
int search(int k,int a[],int len){
	int left = 0;
	int right = len-1;
	int ret = -1;
	while( right > left ){
		
		int mid = (left+right)/2;
		//printf("avgmid = %d\n",mid);
		if(a[mid]==k){
			ret = mid;
			break;
		}else if(a[mid]>k){
			right = mid -1;
			//printf("right = %d\n",right);
		}else{
			left = mid + 1;
			//printf("left = %d\n",left);
		}
	}
	return ret;
}

int main(){
int amount[] = {2,4,7,11,13,16,21,24,27,32,36,40,46};
	int k=40;
	int r = search(k,amount,sizeof(amount)/sizeof(amount[0]));
	printf("r = %d\n",r);
	if(r>-1){
		printf("%d\n",amount[r]);
	}
	return 0;
}
