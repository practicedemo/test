#include<stdio.h>
int search(int key,int a[], int length){
	int i;
	int ret;
	for(i=0;i<length;i++){
		if(key == a[i]){
			ret =i;
			break;
		}
	}
	return ret;
}
int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,34,45,};
	int r = search(5,a,sizeof(a)/sizeof(a[0]));
	if(r>-1){
		printf("%d\n",r);
		return 0;
	}
}
