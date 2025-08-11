#include<stdio.h>
void main()
{
	int num,first,last,sum;
	printf("enter a number:");
 scanf("%d",&num);
 last=num%10;
 while(num>=10)
 {
 	num=num/10;
 }
 first=num;
 sum=first+last;
 printf("sum of first and last digit:%d\n",sum);
	}	
