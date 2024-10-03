#include<stdio.h>
int main(){
	int grade;
	printf("enter the grade (0-100):");
	scanf("%d",&grade);
	if(grade>=90&&grade<=100)
	{
		printf("grade:excellent");
	}
	else if(grade>=80&&grade<90)
	{
		printf("grade:very good");
	}
	else if (grade>=70&&grade<80)
	{
		printf("grade:good");
	}
	else if(grade>=60&&grade<70)
	{
		printf("grade:pass");
	}
	else if(grade>=0&&grade<60)
	{
		printf("grade:fail");
	}
	else{
		printf("invalid grade please enter a value between 0 and 100 \n");
	}
	return 0;
}

