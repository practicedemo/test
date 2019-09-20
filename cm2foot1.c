#include <stdio.h>
int main()
{
	int cm,foot,inch;

	scanf("%d",&cm);

	foot = cm/30.48;
	inch = (cm-foot*30.48)/30.48*12;

	printf("%d %d\n",foot,inch);

	return 0 ;


}
