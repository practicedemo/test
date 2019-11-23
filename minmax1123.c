#include<stdio.h>

void minmax(int a[],int len, int *max, int *min);
int main(){
	int a[] ={1,2,34,22,45,66,76,23,11,4,5,6,7};
	int len = sizeof(a)/sizeof(a[0]);
	int min,max;
	minmax(a,len,&min,&max);
	printf("min = %d max = %d\n",max,min);
	return 0;
}

void minmax(int a[],int len, int *max, int *min){
	*min = *max = a[0];
	int i;
	for(i=1;i<len;i++){
		if(a[i]>*max){
			*max = a[i];
		}
		if(a[i]<*min){
			*min = a[i];
		}
	}
}
