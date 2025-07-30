#include<stdio.h>
void main()
{
	int i=32;
	if(i<=12)
	{
		printf("child");
	}
	else
	if(i<=18)
	{
		printf("teenager");
	}
	else
	if(i<=59)
	{
		printf("adult");
	}
	else
	{
		printf("senior");
	}
}