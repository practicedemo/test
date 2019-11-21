#include<stdio.h>
int search(int key,int a[],int len){
	int left = 0;
	int right = len-1;
	int ret = -1;
	while(right>left){
		int mid = (left + right)/2;
		if(a[mid] == key ){
			ret = mid;
			break;
		}else if(a[mid]>key){
			right = mid-1;
		}else{
			left = mid +1;
		}
	}
	return ret;
}


int main(){
	
	int amount[] = {2,4,7,11,13,16,21,24,27,32,36,40,46};
	int k = 4;
	int r = search(k,amount,sizeof(amount)/sizeof(amount[0]));
	if(r>-1){
		printf("下标 = %d,num = %d\n",r,amount[r]);
	}


}
