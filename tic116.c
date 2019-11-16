#include<stdio.h>
int main(){
	const int size =3;
	int board[size][size];
	int numofx = 0;
	int numof0 = 0;
	int result = -1;
	int i,j;
	//取得数据
	
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			scanf("%d",&board[i][j]);
		}
	}
	//如果result =-1 判断行
	for(i = 0;i < size && result == -1; i++){
		numofx = numof0 = 0;
		for(j = 0;j < size; j++){
			if(board[i][j] == 1){
				numofx ++;
			}else{
				numof0 ++;
			}
		}
	}
	if(numofx == size){
		result = 1;
	}else if(numof0 == size){
		result = 0;
	}

	if(result == -1){
		for(j=0;j<size && result == -1;j++){
			numofx =numof0 = 0;
			for(i=0;i<size;i++){
				if(board[i][j]==1){
					numofx ++;
				}else{
					numof0 ++;
				}
			}
		}
		if(numofx == size){
			result = 1;
		}else if(numof0 == size){
			result =0;
		}
	}
	
	//对角线
	numofx = numof0 = 0;
	for(i = 0; i < size; i++){
		if(board[i][i]=1){
			numofx ++;
		}else{
			numof0 ++;
		}
	}
	if(numofx == size){
		result = 1;
	}else if(numof0 == size){
		result = 0;
	}

	numofx = numof0 = 0;
	for(i = 0; i < size; i++){
		if(board[i][size-i-1]==1){
			numofx ++;
		}else{
			numof0 ++;
		}
	}
	if(numofx == size){
		result = 1;
	}else if(numof0 == size){
		result = 0;
	}



	if(result == 1){
		printf("X赢了\n");
	}else if(result == 0){
		printf("O赢了\n");
	}else if(result == -1){
		printf("都没赢\n");
	}











}
