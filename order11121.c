#include<stdio.h>
int max(int a[],int len){
	int maxid = 0;
	for(int i=1;i<len;i++){
		if(a[i]>a[maxid]){
			maxid = i;
		}
	}
	return maxid;
}
int main(){
	int a[] = {3,4,5,7,32,21,23,16,18,56,34,22};
	int len = sizeof(a)/sizeof(a[0]);
	for(int i=len-1;i>0;i--){
		int maxid = max(a,i+1);
		int t = a[maxid];
		a[maxid] = a[i];
		a[i] = t;
	}
	for(int i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	
	
	//printf("%d\n",maxid);
	return 0;
}
