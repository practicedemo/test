#include<stdio.h>
int main(){
	 int x;
	 int sum = 0;
	 int digit;
	 scanf("%d",&x);

	 while(x>0){
	 	digit = x % 10;
		sum = sum * 10 + digit;
		x/=10;
	 }

	 printf("%d\n",sum);
	 return 0;
}
