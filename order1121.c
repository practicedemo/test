#include<stdio.h>
int max(int a[],int len){
	int maxid = 0;
	for(int i =0;i<len;i++){
		if(a[i]>a[maxid]){
			maxid = i;
		}
	}
	return maxid;
}


int main(){
	int a[] = {1,2,3,4,6,7,8,94,43,64,35,55};
	int len = sizeof(a)/sizeof(a[0]);
	for(int i=len-1;i>0 ;i--){
	int maxid = max(a,i+1);
	printf("i=%d i+1=%d\n",i,i+1);
	//swap a[maxid] a[len-1]
	int t = a[maxid];
	a[maxid] = a[i];
	a[i] = t;
	}
	for(int i=0;i<len;i++){
		printf("%d ",a[i]);
	}
}
