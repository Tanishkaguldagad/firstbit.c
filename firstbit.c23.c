#include<stdio.h>
void main()
{
	int no=10;
	if(no%3==0 && no%5==0)
	{
		printf("divisible by both");
	}
	else
	if(no%3==0 && no%5!=0)
	{
		printf("divisible by 3");
	}
	else
	if(no%3!=0 && no%5==0)
	{
		printf("divisible by 5");
	}
	else
	if(no%3!=0 && no%5!=0)
	{
		printf("not divisible by both");
	}
}