#include<stdio.h>
void main() {
	int marks=90;
	if (marks>=75) {
		printf("distinction");
	} else {
		if(marks>=65) {
			printf("firstclass");
		} else {
			if(marks>=55) {
				printf("secondclass");
			} else {
				if(marks>=40)
				 {
					printf("pass");
				} else {
                      if(marks<35)
                      {
					printf("fail");

				}
			}
		}
	}
}
}