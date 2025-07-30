#include<stdio.h>
void main()
{
	int s1=10,s2=10,s3=10;
    if(s1==s2&&s2==s3)
{
			printf("triangle is equilateral");
		}
		else
		if(s1==s2||s2==s3||s1==s3)
		{
			printf("triangle is isoceles");
		}
		else
		{
			printf("triangle is scalene");
		}
		
}