#include<stdio.h>
int amount[] = {1,5,10,25,50};
char *name[] = {"penny","nickel","dime","quarter","half-dollar"};

int search(int key , int a[], int length){
	int ret= -1;
	int i;
	for(i=0;i<length;i++){
		if(key == a[i]){
			ret = i;
			break;
		}
	}
	return ret;
}

int main(){
	int k = 25;
	int r = search(k,amount,sizeof(amount)/sizeof(amount[0]));
	if(r>-1){
		printf("%s\n",name[r]);
	}
}