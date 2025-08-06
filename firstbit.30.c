#include<stdio.h>
void main()
{
	int num=28,sum=0;
	int i;
	for (i=1;i<num;i++)
{
	if(num%i==0)
	{
	sum+=i;
}
}
			  if(sum==num)
		{
		printf("num is perfect\n");
}
	else
	{
		printf("num is not perfect\n");
	}
}
