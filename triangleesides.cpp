#include<stdio.h>
int main(){
	int s1,s2,s3;
	printf("enter the values of the 3 sides of the triangle");
	scanf("%d%d%d",&s1,&s2,&s3);
	if((s1+s2>s3)&&(s1+s3>s2)&&(s2+s3>s1))
	{
		if(s1==s2&&s2==s3)
		{
			printf("the triangle is equilateral");
		}
		else if (s1==s2||s2==s3||s1==s3)
		{
			printf("the triangle is isosceles \n");
		}
			else{
				printf("the triangle is scalene \n");
			}
			
			
			
				printf("the given side do not from a valid triangle");
			}
	
	return 0;
}
