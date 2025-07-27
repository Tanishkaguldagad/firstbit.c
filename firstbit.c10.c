#include<stdio.h>
void main()
{
	int math=89;
	int science=78;
	int marathi=80;
	int english=95;
	int hindi=86;
	int totalmarks;
	float percentage;
	
	totalmarks=math+science+marathi+english+hindi;
	percentage=(totalmarks/500.0)*100;
	printf("totalmarks:%d\n",totalmarks);
	printf("percentage:%2f%%\n",percentage);
}