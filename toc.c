#include<stdio.h>
int main(){
	const int size = 3;//定义数组常量
	int board[size][size];//声明数组
	int i,j;//声明循环变量
	int numofx;//声明计数变量
	int numof0;//声明计数变量
	int result = -1;//结果flag -1 没人赢 1 为x赢 0为o赢

	/*循环输入数据下标依次为 00 01 02 10 11 12 20 21 22*/

	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);			
		}
	}
	//循环每行的结果是不是都一样
	for(i=0;i<size && result == -1;i++){//以i为主判断三行的num
		numof0 = numofx = 0;//计数器清零
		for(j=0;j<size;j++){//循环每一排的的i0 i1 i2 
			if(board[i][j]==1){//如果board[i]行的[j](0,1,2)其中有==1的 numofx 则计数加1
				numofx++;
			}else{
				numof0++; //否则则为0的加1
			}
		}//判断行循环的结果，如果0 或者1 等于size（等于size的长度内都一样
		if(numof0==size){
			result = 0;//变更flag如果3个都是0 result则等于0
		}else if(numofx == size){
			result == 1; //变更flag如果3个都是1，result则等于1
		}
	}
	
	//循环每列的结果是不是一样
	if(result == -1){//如果还是没有任何一方赢
		for(j=0;j<size && result == -1;j++){
			numof0 = numofx =0;
			for(i=0;i<size;i++){
				if(board[i][j]==1){
					numofx++;
				}else{
					numof0++;
				}
			}
			if(numof0 == size){
				result = 0;
			}else if(numofx == size){
				result == 1;
			}
		}
	}

	//循环检查对角线
	numof0 = numofx =0;
	for(i=0;i<size;i++){
		if(board[i][i]==1){//[i][i] 为左上角到右下角 00 11 22
			numofx++;
		}else{
			numof0++;
		}
	}
	//检查计数结果
	if(numof0 == size){
		result = 0;
	}else if(numofx == size){
		result =1;
	}
	//检查另一条对角线 左下到右上
	//计数清零
	numofx = numof0 =0;
	for(i=0;i<size;i++){
		if(board[i][size-i-1]){//一次判断下标为 02 11 20
			numofx++;
		}else{
			numof0++;
		}
	}
	//判断结果
	if(numof0 == size){
		result = 0;
	}else if(numofx == size){
		result =1;
	}
	//判断result的值输出赢家
	if(result == -1){
		printf("都没赢\n");
	}else if(result==1){
		printf("x赢了\n");
	}else if(result == 0){
		printf("o赢了\n");
	}

	return 0;




















}
