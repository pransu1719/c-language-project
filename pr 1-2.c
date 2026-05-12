#include<stdio.h>
int main()
{
	float BS, HRA,DA,TA;
	printf("enter base salary:");
	scanf("%f",&BS);
	printf("enter HRA:");
	scanf("%f",&HRA);
	printf("enter DA:");
	scanf("%f",&DA);
	printf("enter TA:");
	scanf("%f",&TA);
	float hra=HRA/100;
	float da=DA/100;
	float ta=TA/100;
	float gs=BS+HRA+DA+TA;
	printf("your gross salary:%.2f",gs);
	
}
/*
enter base salary:100
enter HRA:10
enter DA:5
enter TA:8
your gross salary:123.00
*/
     
     


