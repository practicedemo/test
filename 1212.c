#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	char s1[] = "abc";
	char s2[] = "Abc";
	printf("%d\n",s1==s2);
	printf("a-A = %d\n",'a'-'A');
	printf("strcmp = %d\n",strcmp(s1,s2));

	return 0;
}
