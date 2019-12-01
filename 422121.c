#include<stdio.h>
int main(){
	int x;

	scanf("%d",&x);

	if(x<0){
		printf("f(%d)= %d\n",x,-1);
	}else if( x==0 ){
		printf("f(%d)= %d\n",x,0);
	}else{
		printf("f(%d) = %d\n",x,1);
	}
	return 0;
}
