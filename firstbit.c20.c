#include<stdio.h>
void main()
{
	int a=34,b=56,c=65;
	if(a>=b && a>=c)
	{
		printf("A is greater...");
	}
	else 
	if(b>=a && b>=c)
	{
		printf("B is greater...");
	}
	else
	{
		printf("C is greater...");
	}

}