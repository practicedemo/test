#include<stdio.h>
int minmax(int *a,int len){
	printf("minmax=%ld\n",sizeof(a));
	printf("minmax p =%p\n",a);
	a[0]=1000;
}
int main(void){
	int a[] = {1,2,3,4,5,6,7,8,9,0};
	printf("sizeof(a)=%ld\n",sizeof(a));
	printf("main p = %p\n",a);
	minmax(a,sizeof(a)/sizeof(a[0]));
	printf("a[0]=%d\n",a[0]);
	return 0;
}
