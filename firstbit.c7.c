#include<stdio.h>
void main()
{
	int min=70;
	int hr;
	hr=min/60;
	min=min%60;
	printf("hr=%d and min=%d",hr,min);
}