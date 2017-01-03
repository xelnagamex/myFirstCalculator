#include <stdio.h>

void main()
{
	printf("Hello. This is very primitive calculator.\nType expression like 1+1 or 50*4 end press enter\nPossible operations are: + - * /\n\n");
	while (1)
	{
		int num1=0,num2=0,result=0;
		char oper;

		printf(">");
		scanf("%d %c %d",&num1,&oper,&num2);

		if(oper=='+')
			result=num1+num2;
		if(oper=='-')
			result=num1-num2;
		if(oper=='*')
			result=num1*num2;
		if(oper=='/')
		{	float result;
			result=(float)num1/num2;
			printf("%d%c%d=%f\n",num1,oper,num2,result);
			continue;
			}
		if (num1==0&&num2==0&&result==0)
		{
			printf("FUCK UP! YOU CRASHED THIS!\n");
			break;
		}

		printf("%d%c%d=%d\n",num1,oper,num2,result);
	}
}
