#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter two angles of triangle:");
	scanf("%f %f",&a,&b);
	
	c=180-(a+b);
	printf("the third angle is:%.2f\n",c);
}