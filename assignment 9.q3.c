#include<string.h>
void main()
{
	char source[]="firstbit";
	char destination[20];
	strncpy(destination,source,5);
	
	destination[5]='\0';
	printf("source string %s\n",source);
	printf("copied string %s\n",destination);
}