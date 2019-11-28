#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int max,mid,min;
	if(a>b && a>c){
		if(b>c){
			max = a;
			mid = b;
			min = c;
		}else{
			max = a;
			mid = c;
			min = b;
		}
	}else if(b>a && b>c){
		if(a>c){
			max = b;
			mid = a;
			min = c;
		}else{
			max = b;
			mid = c;
			min = a;
		}
	}else if(c>a && c>b){
		if(a>b){
			max = c;
			mid = a;
			min = b;
		}else{
			max = c;
			mid = b;
			min = a;
		}
	}else if(a==b && b==c){
		max = a;
		mid = b;
		min = c;
	}
	printf("%d->%d->%d\n",min,mid,max);
	return 0;
}
