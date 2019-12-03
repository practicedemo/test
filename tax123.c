#include<stdio.h>
int main(){
	int salary;
	double tax;
	double total;
	double stand = 1600;
	scanf("%d",&salary);
	if(salary <= 1600 && salary > 0){
		total = salary - stand;
	}else if(salary > 1600 && salary <= 2500){
		total = (salary - stand) * 0.05;
	}else if(salary > 2500 && salary <= 3500){
		total = (salary - stand) * 0.1;
	}else if(salary >3500 && salary <= 4500){
		total = (salary - stand) * 0.15;
	}else{
		total = (salary -stand) * 0.2;
	}
	printf("%.2f\n",total);
	return 0;
}
