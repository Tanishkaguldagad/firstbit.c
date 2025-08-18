#include<string.h>
void main()
{
	char str1[4];
	char str2[]="siya";
	 strcpy(str1,str2);
	  printf("String 1 (after copy): %s\n", str1);
    printf("String 2: %s\n", str2);
}