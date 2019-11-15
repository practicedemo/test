#include<stdio.h>

int main(){
	const int size = 3;
	int board[size][size];
	int i,j;
	int numofx;
	int numof0;
	int result = -1;

	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);
		}
	}
	
	for(i=0;i<size && result == -1;i++){
		numof0 = numofx = 0;
		for(j=0;j<size;j++){
			if(board[i][j] == 1){
				numofx++;
			}else{
				numof0++;
			}
		}
		if(numof0 == size){
			result = 0;
		}else if(numofx == size){
			result = 1;
		}
	}

	if(result == -1){
		for(j=0;j<size && result == -1;j++){
			numof0 = numofx = 0;
			for(i=0;i<size;i++){
				if(board[i][j] == 1){
					numofx++;
				}else{
					numof0++;
				}
			}
			if(numof0 == size){
				result = 0;
			}else if(numofx == size){
				result =1;
			}
		}
	}

	numof0 = numofx = 0;
	for(i=0;i<size;i++){
		if(board[i][i]==1){
			numofx++;
		}else{
			numof0++;
		}
	}
	if(numof0 == size){
		result = 0;
	}else if(numofx == size){
		result = 1;
	}

	numof0 = numofx = 0;
	for(i=0;i<size;i++){
		if(board[i][size-i-1] == 1){
			numofx ++;
		}else{
			numof0 ++;
		}
	}
	if(numof0 == size){
		result =0;
	}else if(numofx == size){
		result = 1;
	}
	if(result==-1){
		printf("没有人赢\n");
	}else if(result == 1){
		printf("x赢了\n");
	}else if(result==0){
		printf("0赢了\n");
	}
	return 0;

}

