#include<stdio.h>

int f(int *p){
	printf("p=%p\n",p);
	*p =25;	
}
int g(int i){
	printf("gi=%d\n",i);
}
int main(){
	int i=6;
	printf("i=%p\n",&i);
	f(&i);
	g(i);
	return 0;
}
