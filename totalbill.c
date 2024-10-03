#include<stdio.h>
int main(){
	int customerid;
	char customername[50];
	float unitsconsumed,totalbill;
	printf("enter the value of customer id");
	scanf("%d",&customerid);
	printf("enter the value of customer name");
	scanf("%s",&customername);
	printf("enter the value of unit consumed ");
	scanf("%f",&unitsconsumed);
	if(unitsconsumed<=100)
	{
		totalbill=unitsconsumed*1.50;
	}
	else if(unitsconsumed<=300)
	{
		totalbill=(100*1.50)+((unitsconsumed-100)*2.00);
	}
	else{
		totalbill=(100*1.50)+(200*2.00)+((unitsconsumed-300)*3.00);
}
	printf("\n electricity bill");
	printf("............... \n");
	printf("customer id:%d\n",customerid);
	printf("customer name :%s\n",customername);
	printf("totalbill:%f",totalbill);
	return 0;
}
