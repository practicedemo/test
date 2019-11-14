#include<stdio.h>
int main(){
	int m,n;
	int min;
	scanf("%d %d",&m,&n);
	
	if(m<n){
		min = m;
	}else{
		min = n;
	}
	
	
	int ret;
	int i;
	for(i=1;i<min;i++)
	{
		if(m%i==0){
			if(n%i==0){
				ret = i;
			}
		}
	}
	printf("gcd = %d\n",ret);
	return 0;
}
